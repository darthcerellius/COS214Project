//
// Created by jeanre on 2020/11/05.
//

#include "EngineState.h"

EngineState::EngineState() : ComponentState("engine") {
    this->horsePower=0;
    this->fuelConsumption=0;
}



void EngineState::setHorsePower(double newHP) {
    this->horsePower=newHP;
}

double EngineState::getHorsePower() {
    return horsePower;
}

void EngineState::setfuelConsumption(double newFuelConsumption) {
    this->fuelConsumption=newFuelConsumption;
}

double EngineState::getFuelConsumption() {
    return fuelConsumption;
}

EngineState::EngineState(double horsePower, double fuelConsumption) : ComponentState("engine"){
    this->horsePower=horsePower;
    this->fuelConsumption=fuelConsumption;
}

EngineState::~EngineState() {

}

void EngineState::setName(std::string newName) {
    this->name= newName;
}


