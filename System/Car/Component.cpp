//
// Created by bieldt on 2020/10/31.
//

#include "Component.h"

Component::Component(string name) {
    this->name = name;
}

string Component::getName() {
    return name;
}

Component::~Component() {

}

void Component::add(Component *c) {

}

void Component::remove(string c) {

}

void Component::setWeight(double newWeight) {
    this->weight=newWeight;
}

double Component::getStrength() {
    return strength;
}

void Component::setStrength(double newStrength) {
    this->strength=newStrength;
}

double Component::getWeight() {
    return weight;
}
