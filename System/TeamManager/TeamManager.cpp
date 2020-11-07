//
// Created by kyle-pc on 2020/10/28.
//

#include <iostream>
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
    delete calendar;
    delete preSeasonCommand;
    delete curSeasonCommand;
    CurrentSeason::clean();
    NextSeason::clean();
}

TeamManager* TeamManager::getTeamManager() {
    if (!isCreated) {
        TeamManager::manager = new TeamManager();
        isCreated = true;
    }
    return TeamManager::manager;
}

void TeamManager::run() {

    //run the pre-season command
    preSeasonCommand->execute(nullptr);
    raceCar = CurrentSeason::raceCar;

    std::cout << "Team Manager running" << std::endl;
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

    /*Transport goods to the race tracks */
    while (!calIterator->isDone()) {
        RaceWeekend* weekend = calIterator->current();
        CurrentSeason::setRaceWeekend(weekend);
        GoodsContainer container;
        if (weekend->getLocation() == "Europe") {
            container.setShippingLabel(weekend->getName(), weekend->getLocation(), weekend->getDate());
        } else {
            std::cout << "Fetching goods from harbor..." << std::endl;
            container = CurrentSeason::getContainer(weekend->getLocation() + "Harbor");
        }
        RoadTransport transport;
        transport.load(container);
        std::cout << std::endl;

        //This assumes that a Command that will be called won't need an existing car, and will instead make one
        curSeasonCommand->execute(CurrentSeason::raceCar);
        calIterator->next();
    }
    Car * c = CurrentSeason::raceCar;
    delete calIterator;
}
