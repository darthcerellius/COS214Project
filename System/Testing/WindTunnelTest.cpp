//
// Created by jeanre on 2020/11/06.
//

#include "WindTunnelTest.h"
#include "../Car/Car.h"

bool WindTunnelTest::test(Component * component) {
    if (!development_car && component->getName() == "Car"){
        development_car = component->clone();
    }

    if(tokens<1){
        std::cout<<"Already ran all 400 wind tunnel tests" << std::endl << std::endl;
    }
    return development_car->windTunnelTest(tokens );
}

WindTunnelTest::WindTunnelTest() {
    development_car= nullptr;
    tokens=400;
}

WindTunnelTest::~WindTunnelTest() {
    delete development_car;

}
