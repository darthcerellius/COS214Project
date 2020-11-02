//
// Created by kyle-pc on 2020/11/02.
//

#include "SeaTransport.h"
#include <iostream>

SeaTransport::SeaTransport() {

}

SeaTransport::~SeaTransport() {

}

void SeaTransport::package(GoodsContainer *component) {
    std::cout << "Loading F1 car onto the transport ship..." << std::endl;
    shippingContainer = component;
}

void SeaTransport::ship() {
    std::cout << "The ship is on it's way to the race track" << std::endl;
    /*might put an instance of this class to the team manager for later retrieval*/
}

GoodsContainer *SeaTransport::unpackage() {
    std::cout << "Unloading container from the ship" << std::endl;
    return shippingContainer;
}
