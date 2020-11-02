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
}

void SeaTransport::ship() {

}

GoodsContainer *SeaTransport::unpackage() {
    std::cout << "Unloading container from the ship" << std::endl;
    return nullptr;
}
