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
}
