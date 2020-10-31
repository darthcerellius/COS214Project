//
// Created by Marco on 31/10/2020.
//

#include "BrokenComponent.h"

BrokenComponent::BrokenComponent(){
    std::cout << "One of the race car's component breaks and requires immediate attention.\n";
}

BrokenComponent::~BrokenComponent() {}

std::string BrokenComponent::eventDescription() {
    return "The race car returns to the pit stop to have its broken component replaced or repaired.";
}