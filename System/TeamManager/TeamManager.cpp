//
// Created by kyle-pc on 2020/10/28.
//

#include <iostream>
#include "TeamManager.h"
#include "TeamManagerObjects.h"

bool TeamManager::isCreated = false;

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
}
