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

void ComponentStore::setMemento(ComponentMemento * newMemento) {
    this->memento = newMemento;
}

ComponentMemento *ComponentStore::getMemento() {
    return memento;
}
