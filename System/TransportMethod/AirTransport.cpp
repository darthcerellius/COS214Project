//
// Created by kyle-pc on 2020/11/02.
//

#include <iostream>
#include "AirTransport.h"

AirTransport::AirTransport() {

}

AirTransport::~AirTransport() {

}

void AirTransport::package(ComponentCareTaker *component) {
    std::cout << "Loading car onto the plane" << std::endl;
    shippingContainer = component;
}

void AirTransport::ship() {
    std::cout << "Plane is on it's way to the race track" << std::endl;
}

ComponentCareTaker *AirTransport::unpackage() {
    std::cout << "Unloading car from the plane" << std::endl;
    return shippingContainer;
}
