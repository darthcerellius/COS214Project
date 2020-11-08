//
// Created by jeanre on 2020/11/02.
//

#include "CarState.h"

CarState::CarState() {
    this->strategy = nullptr;
    this->carName= "No car Name";
    this->name="Car";

}

CarState::CarState(std::string carName, std::string name, map<std::string, Component *> components,GeneralRaceStrategy* strategy1) {
    this->strategy= strategy1;
    this->carName= carName;
    this->components = components;
    this->name = name;

}

map<std::string, Component *> CarState::getComponents() {
    return components;
}

void CarState::setComponents(map<std::string, Component *> newComponents) {
    this->components = newComponents;
}


std::string CarState::getName() {
    return  this->name;
}

void CarState::setName(std::string newComponentName) {
    this->name = newComponentName;
}

void CarState::setCarName(std::string newCarName) {
    this->carName=newCarName;
}

std::string CarState::getCarName() {
    return this->carName;
}

CarState::~CarState() {
    map<string,Component*>::iterator it;
    for(it = components.begin(); it!= components.end(); it++){
        delete it->second;
    }
    delete strategy;
}

void CarState::setStrategy(GeneralRaceStrategy * newStrat) {
    this->strategy= newStrat;
}

GeneralRaceStrategy* CarState::getStrategy() {
    return this->strategy;
}
