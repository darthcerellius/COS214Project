//
// Created by jeanre on 2020/11/02.
//

#include "ComponentState.h"

ComponentState::ComponentState() {
    this->strength = 0;
    this->weight=0;
    this->name= "Non existant";
}

ComponentState::ComponentState(double weight, double strength, std::string name) {
    this->strength = strength;
    this->weight = weight;
    this->name = name;
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
    this->weight= newWeight;
}

void ComponentState::setStrength(double newStrength) {
    this->strength = newStrength;
}

void ComponentState::setName(std::string newName) {
    this->name = newName;
}
