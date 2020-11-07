//
// Created by jeanre on 2020/11/02.
//

#include "CarStore.h"

void CarStore::setMemento(CarCareTaker * newMemento) {
    this->memento = newMemento;
}

CarStore::CarStore() {
    this->memento = nullptr;
}

CarStore::~CarStore() {
    delete  memento;
}

CarCareTaker *CarStore::getMemento() {
    return memento;
}
