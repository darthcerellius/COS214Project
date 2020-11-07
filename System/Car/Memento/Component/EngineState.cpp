//
// Created by jeanre on 2020/11/05.
//

#include "EngineState.h"

EngineState::EngineState() : ComponentState("engine") {
    this->horsePower=0;
    this->fuelConsumption=0;
}



void EngineState::setHorsePower(int newHP) {
    this->horsePower=newHP;
}

int EngineState::getHorsePower() {
    return horsePower;
}

void EngineState::setfuelConsumption(int newFuelConsumption) {
    this->fuelConsumption=newFuelConsumption;
}

int EngineState::getFuelConsumption() {
    return fuelConsumption;
}

EngineState::EngineState(int horsePower, int fuelConsumption) : ComponentState("engine"){
    this->horsePower=horsePower;
    this->fuelConsumption=fuelConsumption;
}

EngineState::~EngineState() {

}

void EngineState::setName(std::string newName) {
    this->name= newName;
}


