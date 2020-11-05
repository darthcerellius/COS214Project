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

bool TeamManager::isCreated = false;
TeamManager TeamManager::manager;

TeamManager::TeamManager() {
    calendar = new ConcreteCalendar();
}


TeamManager::~TeamManager() {
    CurrentSeason::clean();
    NextSeason::clean();
}

TeamManager &TeamManager::getTeamManager() {
    if (!isCreated) {
        TeamManager::manager = TeamManager();
        isCreated = true;
    }
    return TeamManager::manager;
}

void TeamManager::run() {

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
        root->execute(nullptr);
        calIterator->next();
    }
}
