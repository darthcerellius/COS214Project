//
// Created by jeanre on 2020/11/02.
//

#include "ComponentCareTaker.h"

ComponentCareTaker::ComponentCareTaker() {
    state = new ComponentState();
}
ComponentCareTaker::~ComponentCareTaker() {
    delete state;
}

void ComponentCareTaker::setMemento(double strength, double weight, std::string name) {
    this->state->setName(name);
    this->state->setWeight(weight);
    this->state->setStrength(strength);
}
ComponentState* ComponentCareTaker::getMemento() {
    return state;
}