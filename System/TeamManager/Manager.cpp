//
// Created by kyle-pc on 2020/10/28.
//

#include "Manager.h"
Manager::Manager() {
    std::cout << "Base manager constructed" << std::endl;
}

Manager::~Manager() {
    std::cout << "Destroying manager" << std::endl;
    delete successor;
}

void Manager::addManager(Manager *newManager) {
    successor = newManager;
}
