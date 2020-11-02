//
// Created by jeanre on 2020/11/02.
//

#include "ComponentMemento.h"

ComponentMemento::ComponentMemento() {
    state = new ComponentState();
}
ComponentMemento::~ComponentMemento() {
    delete state;
}

void ComponentMemento::setMemento(double strength, double weight, std::string name) {
    this->state->setName(name);
    this->state->setWeight(weight);
    this->state->setStrength(strength);
}
ComponentState* ComponentMemento::getMemento() {
    return state;
}