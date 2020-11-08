//
// Created by jeanre on 2020/11/02.
//

#include "CarCareTaker.h"

void CarCareTaker::setMemento(CarMemento * newMemento) {
    this->memento = newMemento;
}

CarCareTaker::CarCareTaker() {
    this->memento = nullptr;
}

CarCareTaker::~CarCareTaker() {
    delete  memento;
}

CarMemento *CarCareTaker::getMemento() {
    return memento;
}
