//
// Created by Marco on 31/10/2020.
//

#ifndef SYSTEM_PITCREW_H
#define SYSTEM_PITCREW_H
#include "RaceEvents/RaceEvent.h"
#include "../../Car/Car.h"
#include "../../Car/Tyre/TyreSupplier.h"

/**
 *  The PitCrew object is responsible for changing the Car's tyres during a race, notifying the car of events taking
 *  place during the race and making tactical decisions in the race to maximise the winning probability of the car.
 *  The PitCrew acts as a context in the RaceEvent State pattern and acts as an invoker in the Instruction Command
 *  pattern that sends instructions to the car.
 */
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
    void makeTacticalInstruction(int); ///Sends a command to the car to make a tactical move to maximise the winning probability.
    void respondToEvent();///Sends a command to the car to respond to an event appropriately.
    void observeNewEvent(RaceEvent*);///Change the current event that is being observed and send the response command to the car. Acts as the request() function in the Context participant of the State pattern.
    void changeTyre();///Changes the car's tyres if they still have tyres to be switched. Switches the compound of the Tyre object.
    void orderTyres(TyreSupplier* );///Order 5 sets of tyres for the race. Sets the tyre variable.
};


#endif //SYSTEM_PITCREW_H
