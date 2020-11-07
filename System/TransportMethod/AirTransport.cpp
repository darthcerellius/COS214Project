//
// Created by kyle-pc on 2020/11/02.
//

#include <iostream>
#include "AirTransport.h"
#include "../TeamManager/TeamManagerObjects.h"
#include "../Car/Memento/Car/CarStore.h"

AirTransport::AirTransport() {

}

AirTransport::~AirTransport() {

}

void AirTransport::package(Car* component) {
    std::cout << "Loading car onto the plane" << std::endl;
    shippingContainer = component;
}

void AirTransport::ship() {
    std::cout << "Plane is on it's way to the race track" << std::endl;
    if (CurrentSeason::garage == nullptr) {
        CurrentSeason::garage = new CarStore();
        CurrentSeason::garage->setMemento(shippingContainer->createMemento());
    }
}

Car* AirTransport::unpackage(std::string place) {
    std::cout << "Unloading car from the plane" << std::endl;
    return shippingContainer;
}
