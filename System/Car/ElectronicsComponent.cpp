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
//TODO implementation
bool ElectronicsComponent::test() {
    int testResult = rand()%10;
    if(testResult == 0){
        return false;//test failed
    }else{
        return true;
    }
}

Component *ElectronicsComponent::clone() {
    return dynamic_cast<Component*>(new ElectronicsComponent(this));
}
