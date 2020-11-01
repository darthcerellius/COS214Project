//
// Created by Marco on 01/11/2020.
//

#ifndef COS214PROJECT_TACTICALDECISION_H
#define COS214PROJECT_TACTICALDECISION_H
#include "Instruction.h"

class TacticalDecision: public Instruction {
protected:
    std::string decision;
public:
    TacticalDecision(Car* = 0, string = "");
    ~TacticalDecision();
    void executeInstruction();
};


#endif //COS214PROJECT_TACTICALDECISION_H
