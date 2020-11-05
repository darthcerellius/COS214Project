//
// Created by jeanre on 2020/11/02.
//

#include "ComponentStore.h"

ComponentStore::ComponentStore() {
    this->memento= nullptr;
}

ComponentStore::~ComponentStore() {
    delete memento;
}

void ComponentStore::setMemento(ComponentCareTaker * newMemento) {
    this->memento = newMemento;
}

ComponentCareTaker *ComponentStore::getMemento() {
    return memento;
}
