//
// Created by kyle-pc on 2020/11/02.
//

#include <iostream>
#include <fstream>
#include "TeamManager/TeamManager.h"


using namespace std;
int main() {
    TeamManager* manager = TeamManager::getTeamManager();
    manager->run();
    delete manager;
}