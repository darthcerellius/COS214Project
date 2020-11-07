//
// Created by kyle-pc on 2020/11/06.
//

#include "TestingCommand.h"

TestingCommand::TestingCommand(){
    softwareTest = new SoftwareTest();
    windTunnelTest = new WindTunnelTest();
}

void TestingCommand::execute(Car *car) {
    std::cout << "Performing tests on the car..." << std::endl;
    softwareTest->test(car);
    windTunnelTest->test(car);
    std::cout << "Testing complete" << std::endl;
    successor->execute(car);
}