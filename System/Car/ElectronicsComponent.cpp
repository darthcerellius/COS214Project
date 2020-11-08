//
// Created by bieldt on 2020/10/31.
//


#include "ElectronicsComponent.h"

ElectronicsComponent::ElectronicsComponent() : Component("electronics") {

}

ElectronicsComponent::ElectronicsComponent(ElectronicsComponent *c) :Component(c->getName()){

}

ElectronicsComponent::~ElectronicsComponent() {

}


Component *ElectronicsComponent::clone() {
    return dynamic_cast<Component*>(new ElectronicsComponent(this));
}


bool ElectronicsComponent::windTunnelTest() {
    std::cout << this->getName() << " not suitable to test in the wind tunnel as it will be contained within the chassis" << std::endl<< std::endl;
    return true;
}

bool ElectronicsComponent::softwareTest() {
    std::default_random_engine generator;
    std::binomial_distribution<int> distribution(9,0.5);
    if (distribution(generator) >4 &&distribution(generator)<6 ){
        std::cout << this->getName() << " passed the software test" << std::endl<< std::endl;
        return true;
    }else{
        std::cout << this->getName() << " failed the software test" << std::endl<< std::endl;
        return false;
    }

}
