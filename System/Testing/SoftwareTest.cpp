//
// Created by jeanre on 2020/11/06.
//

#include "SoftwareTest.h"

bool SoftwareTest::test(Component * c) {
    if (c->getName()!="engine"){
        std::cout << "Cannot perform software test on components except engine" << std::endl;
        return false;
    }
    int HP = dynamic_cast<Engine*>(c)->getHorsePower();
    int fuelConsumption = dynamic_cast<Engine*>(c)->getFuelConsumption();
    bool result=false;
    if (fuelConsumption>6){
        std::cout << "Software test failed, engine fuel consumption too high" << std::endl;
        return false;
    }
    if (HP < 500){
        std::cout << "Software test failed, engine does not have enough horsepower to be competitive" << std::endl;
        return false;
    }
    return true;

}


SoftwareTest::SoftwareTest() {

}


