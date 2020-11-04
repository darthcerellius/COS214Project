//
// Created by kyle-pc on 2020/10/28.
//

#include <iostream>
#include "TeamManager.h"

bool TeamManager::isCreated = false;

TeamManager::TeamManager() {
    calendar = new ConcreteCalendar();
}


TeamManager::~TeamManager() {
    //delete root;
    delete calendar;
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
