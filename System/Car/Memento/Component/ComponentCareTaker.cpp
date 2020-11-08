//
// Created by jeanre on 2020/11/02.
//

#include "ComponentCareTaker.h"

ComponentCareTaker::ComponentCareTaker() {
    this->memento= nullptr;
}

ComponentCareTaker::~ComponentCareTaker() {
    delete memento;
    memento= nullptr;
}

void ComponentCareTaker::setMemento(ComponentMemento * newMemento) {
    this->memento = newMemento;
}

ComponentMemento *ComponentCareTaker::getMemento() {
    return memento;
}
