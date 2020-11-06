//
// Created by bieldt on 2020/10/31.
//
#include "../Memento/Component/ComponentCareTaker.h"
#include "Component.h"

Component::Component(string name) {
    this->name = name;
}

string Component::getName() {
    return this->name;
}

Component::~Component() {

}

void Component::add(Component *c) {

}

void Component::remove(string c) {

}

void Component::setName(std::string newName) {
    this->name= newName;
}








