//
// Created by Marco on 01/11/2020.
//

#ifndef COS214PROJECT_INSTRUCTION_H
#define COS214PROJECT_INSTRUCTION_H
#include "../../../Car/Car.h"

/**
 * The abstract Instruction class acts as an interface for the concrete commands. These commands are invoked by the
 * PitCrew and execute instructions in the Car class. PitCrew will send a command to the Car through one of the child
 * classes: TacticalDecision or EventResponse. Acts as the Command participants in the Instruction Command pattern.
 */

class Instruction {
protected:
    Car* sentTo;
public:
    Instruction();
    ~Instruction();
    virtual void executeInstruction() = 0;///Will execute makeTacticalDecision or respondToEvent in the car class depending on child class.
};


#endif //COS214PROJECT_INSTRUCTION_H
