//
// Created by bieldt on 2020/10/31.
//

#include "AerodynamicsComponent.h"

AerodynamicsComponent::AerodynamicsComponent(string name) : Component(name) {

}

AerodynamicsComponent::AerodynamicsComponent(AerodynamicsComponent *a):Component(a->getName()){

}

AerodynamicsComponent::~AerodynamicsComponent() {

}

//TODO discuss implementation
bool AerodynamicsComponent::test() {
    int testResult = rand()%10;
    if(testResult == 0){
        return false;//test failed
    }else{
        return true;
    }
}

Component* AerodynamicsComponent::clone() {
    return dynamic_cast<Component*>(new AerodynamicsComponent(this));
}


