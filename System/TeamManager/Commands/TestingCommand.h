//
// Created by kyle-pc on 2020/11/06.
//

#ifndef COS214PROJECT_TESTINGCOMMAND_H
#define COS214PROJECT_TESTINGCOMMAND_H

#include "../../Testing/SoftwareTest.h"
#include "../../Testing/WindTunnelTest.h"
#include "Command.h"

/**
 * @brief Creates testing objects and uses them to perform tests on the car.
 */
class TestingCommand : public Command {
public:
    TestingCommand();
    ~TestingCommand() override;
    void execute(Car *car) override;
private:
    SoftwareTest* softwareTest;
    WindTunnelTest* windTunnelTest;
};


#endif //COS214PROJECT_TESTINGCOMMAND_H
