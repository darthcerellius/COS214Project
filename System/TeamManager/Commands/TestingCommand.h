//
// Created by kyle-pc on 2020/11/06.
//

#ifndef COS214PROJECT_TESTINGCOMMAND_H
#define COS214PROJECT_TESTINGCOMMAND_H

#include "../../Testing/SoftwareTest.h"
#include "../../Testing/WindTunnelTest.h"
#include "Command.h"

class TestingCommand : public Command {
public:
    TestingCommand();
    void execute(Car *car) override;
private:
    Testing* test;
};


#endif //COS214PROJECT_TESTINGCOMMAND_H
