//
// Created by Marco on 31/10/2020.
//

#ifndef SYSTEM_PITCREW_H
#define SYSTEM_PITCREW_H
#include "RaceEvents/RaceEvent.h"
#include "../../Car/Car.h"
#include "../../Car/Tyre/TyreSupplier.h"

class RaceEvent;

class PitCrew {
private:
    Car* racecar;
    RaceEvent* currentEvent;
    Tyre* tyres;
    int currentTyre;
public:
    PitCrew();
    void setCar(Car*);
    Car* getCar();
    ~PitCrew();
    void makeTacticalInstruction(int);
    void respondToEvent();
    void observeNewEvent(RaceEvent*);
    void changeTyre();
    void orderTyres(TyreSupplier* );
};


#endif //SYSTEM_PITCREW_H
