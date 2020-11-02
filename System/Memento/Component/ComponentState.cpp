//
// Created by jeanre on 2020/11/02.
//

#include "ComponentState.h"

ComponentState::ComponentState() {

}

ComponentState::ComponentState(double, double, std::string) {

}

ComponentState::~ComponentState() {

}

double ComponentState::getWeight() {
    return this->weight;
}

double ComponentState::getStrength() {
    return this->strength;
}

std::string ComponentState::getName() {
    return this->name;
}

void ComponentState::setWeight(double newWeight) {
    this->weight=
}

void ComponentState::setStrength(double) {

}

void ComponentState::setName(std::string) {

}
