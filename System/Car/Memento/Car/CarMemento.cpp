//
// Created by jeanre on 2020/11/02.
//

#include "CarMemento.h"
CarMemento::CarMemento() {
    state = new CarState();
}
CarMemento::~CarMemento() {
    delete state;
}

void CarMemento::setMemento(std::string carName, std::string componentName, map<std::string, Component*> component, GeneralRaceStrategy* strategy) {
    this->state->setStrategy(strategy);
    this->state->setCarName(carName);
    this->state->setName(componentName);
    this->state->setComponents(component);
}
CarState* CarMemento::getMemento() {
    return state;
}