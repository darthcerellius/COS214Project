//
// Created by Marco on 01/11/2020.
//

#ifndef COS214PROJECT_INSTRUCTION_H
#define COS214PROJECT_INSTRUCTION_H
#include "../../../Car/Car.h"

class Instruction {
protected:
    Car* sentTo;
public:
    Instruction(Car* = 0);
    ~Instruction();
    virtual void executeInstruction() = 0;
};


#endif //COS214PROJECT_INSTRUCTION_H
