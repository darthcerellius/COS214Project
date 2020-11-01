//
// Created by Marco on 01/11/2020.
//

#ifndef COS214PROJECT_EVENTRESPONSE_H
#define COS214PROJECT_EVENTRESPONSE_H
#include "Instruction.h"
#include "../RaceEvents/RaceEvent.h"

class EventResponse: public Instruction {
protected:
    RaceEvent* event;
public:
    EventResponse(Car* = 0, RaceEvent* = 0);
    ~EventResponse();
    void executeInstruction();
};


#endif //COS214PROJECT_EVENTRESPONSE_H
