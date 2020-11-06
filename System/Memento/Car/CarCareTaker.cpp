//
// Created by jeanre on 2020/11/02.
//

#include "CarCareTaker.h"
CarCareTaker::CarCareTaker() {
    state = new CarState();
}
CarCareTaker::~CarCareTaker() {
    delete state;
}

void CarCareTaker::setMemento(std::string carName, std::string componentName, map<std::string, Component*>* component,GeneralRaceStrategy* strategy,double windResistance,double downForce) {
    this->state->setStrategy(strategy);
    this->state->setCarName(carName);
    this->state->setName(componentName);
    this->state->setComponents(component*);
    this->state->setWindResistance(windResistance);
    this->state->setDownForce(downForce);
}
CarState* CarCareTaker::getMemento() {
    return state;
}