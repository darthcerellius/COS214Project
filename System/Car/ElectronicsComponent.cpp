//
// Created by bieldt on 2020/10/31.
//

#include "ElectronicsComponent.h"

ElectronicsComponent::ElectronicsComponent(string name) : Component(name) {

}

ElectronicsComponent::ElectronicsComponent(ElectronicsComponent *c) :Component(c->getName()){

}

ElectronicsComponent::~ElectronicsComponent() {

}


Component *ElectronicsComponent::clone() {
    return dynamic_cast<Component*>(new ElectronicsComponent(this));
}

void ElectronicsComponent::restore(ComponentCareTaker *) {

}
