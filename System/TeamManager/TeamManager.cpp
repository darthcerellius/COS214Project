//
// Created by kyle-pc on 2020/10/28.
//

#include <iostream>
#include <fstream>
#include "TeamManager.h"
#include "TeamManagerObjects.h"
#include "../Container/GoodsContainer.h"
#include "../TransportMethod/SeaTransport.h"
#include "../Calendar/RaceWeekend.h"
#include "../TransportMethod/RoadTransport.h"
#include "Builder/PreSeasonBuilder.h"
#include "Builder/CurSeasonBuilder.h"

bool TeamManager::isCreated = false;
TeamManager* TeamManager::manager = nullptr;

TeamManager::TeamManager() {
    calendar = new ConcreteCalendar();
    PreSeasonBuilder preBuilder;
    preSeasonCommand = preBuilder.buildCommandChain();
    CurSeasonBuilder curBuilder;
    curSeasonCommand = curBuilder.buildCommandChain();
    raceCar = nullptr;
}


TeamManager::~TeamManager() {
    auto oldState = std::cout.rdbuf();
    std::ofstream preSeasonFile;
    preSeasonFile.open("../Data/Output/Disband.txt");
    std::cout.rdbuf(preSeasonFile.rdbuf());
    delete calendar;
    delete preSeasonCommand;
    delete curSeasonCommand;
    CurrentSeason::clean();
    NextSeason::clean();
    preSeasonFile.close();
    std::cout.rdbuf(oldState);
}

TeamManager* TeamManager::getTeamManager() {
    if (!isCreated) {
        TeamManager::manager = new TeamManager();
        isCreated = true;
    }
    return TeamManager::manager;
}

void TeamManager::run() {
    std::cout << "Would you like to output content to files(1) or to the terminal(2)? ";
    int response;
    std::cin >> response;
    std::ofstream preSeasonFile;
    auto oldState = std::cout.rdbuf();
    if (response == 1) {
        preSeasonFile.open("../Data/Output/PreSeasonEngineering.txt");
        std::cout.rdbuf(preSeasonFile.rdbuf());
    }
    std::cout << "Team Manager running" << std::endl;
    //run the pre-season command
    preSeasonCommand->execute(nullptr);
    if (response == 1) {
        preSeasonFile.close();
    }
    raceCar = CurrentSeason::raceCar;
    if (response == 1) {
        preSeasonFile.open("../Data/Output/PreSeasonTransport.txt");
    }
    Iterator * calIterator = calendar->createIterator();

    /*plan ahead for non-European races */
    std::cout << "Sorting out logistics for any non-European races..." << std::endl;
    while (!calIterator->isDone()) {
        RaceWeekend* weekend = calIterator->current();
        if (weekend->getLocation() != "Europe") {
            GoodsContainer container;
            container.setShippingLabel(weekend->getName(), weekend->getLocation(), weekend->getDate());
            SeaTransport transport;
            transport.load(container);
        }
        calIterator->next();
    }

    calIterator->first();
    preSeasonFile.close();
    std::ofstream curSeasonRaces;
    if (response == 1) {
        std::cout.rdbuf(curSeasonRaces.rdbuf());
    }

    /*Transport goods to the race tracks */
    int raceCounter = 1;
    while (!calIterator->isDone()) {
        if (response == 1) {
            curSeasonRaces.open("../Data/Output/Races/" + std::to_string(raceCounter) + ".txt");
        }
        RaceWeekend* weekend = calIterator->current();
        CurrentSeason::setRaceWeekend(weekend);
        GoodsContainer container;
        if (weekend->getLocation() == "Europe") {
            container.setShippingLabel(weekend->getName(), weekend->getLocation(), weekend->getDate());
        } else {
            std::cout << "Fetching container from harbor..." << std::endl;
            container = CurrentSeason::getContainer(weekend->getLocation() + "Harbor");
            container.setShippingLabel(weekend->getName(), weekend->getLocation(), weekend->getDate());
        }
        RoadTransport transport;
        transport.load(container);
        std::cout << std::endl;

        //This assumes that a Command that will be called won't need an existing car, and will instead make one
        curSeasonCommand->execute(CurrentSeason::raceCar);
        calIterator->next();
        curSeasonRaces.close();
        raceCounter++;
    }
    Car * c = CurrentSeason::raceCar;
    delete calIterator;
    std::cout.rdbuf(oldState);
}
