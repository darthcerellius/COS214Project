//
// Created by kyle-pc on 2020/11/02.
//

#include <memory>
#include "TeamManager/TeamManager.h"
#include "Car/AerodynamicsComponent.h"
#include "Car/Engine.h"
#include "Car/Memento/Car/CarCareTaker.h"
#include "Car/Memento/Component/ComponentCareTaker.h"
#include "Car/Chassis.h"

using namespace std;
int main() {
    TeamManager* manager = TeamManager::getTeamManager();
    manager->run();
    delete manager;



}