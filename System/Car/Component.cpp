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

void Component::restore(ComponentMemento * m) {
    this->name = m->getMemento()->getName();
    this->weight = m->getMemento()->getWeight();
    this->strength = m->getMemento()->getStrength();
}

ComponentMemento *Component::createMemento() {
    ComponentMemento* newMemento = new ComponentMemento();
    newMemento->setMemento(getStrength(),getWeight(),getName());
    return newMemento;
}
