//
// Created by Marco on 31/10/2020.
//

#ifndef SYSTEM_PITCREW_H
#define SYSTEM_PITCREW_H
#include "RaceEvents/RaceEvent.h"
#include "../../Car/Car.h"

class PitCrew {
private:
    Car* racecar;
    RaceEvent* currentEvent;
public:
    PitCrew();
    PitCrew(Car*);
    ~PitCrew();
    void makeTacticalInstruction();
    void respondToEvent();
};


#endif //SYSTEM_PITCREW_H
