//
// Created by kyle-pc on 2020/11/02.
//

#include "RoadTransport.h"
#include <iostream>

RoadTransport::RoadTransport() {

}

RoadTransport::~RoadTransport() {

}

void RoadTransport::package(GoodsContainer *component) {
    std::cout << "Packaging container into truck" << std::endl;
    shippingContainer = component;
}

void RoadTransport::ship() {
    std::cout << "The fleet of trucks is on it's way to the track" << std::endl;
}

GoodsContainer *RoadTransport::unpackage() {
    std::cout << "Unloading container from the trucks" << std::endl;
    return shippingContainer;
}
