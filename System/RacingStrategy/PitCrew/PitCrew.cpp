//
// Created by Marco on 31/10/2020.
//

#include "PitCrew.h"
#include "RaceEvents/NoEvent.h"
#include "Instructions/EventResponse.h"
#include "Instructions/TacticalDecision.h"

PitCrew::PitCrew(){
    racecar = 0;
    currentEvent = new NoEvent();
}

PitCrew::PitCrew(Car* racecar) {
    this->racecar = racecar;
    currentEvent = new NoEvent();
}

PitCrew::~PitCrew() {
    delete currentEvent;
}

void PitCrew::respondToEvent() {
    if(racecar){
        EventResponse* response = new EventResponse(racecar, currentEvent);
        response->executeInstruction();
        delete response;
    } else
        std::cout << "DEBUG: Pitcrew cannot respond to event as it is not assigned to a car.\n";
}

void PitCrew::makeTacticalInstruction(int decisionSelector) {
    if(racecar){
        string decision;
        switch(decisionSelector){
            case 0:
                decision = "The race car speeds up to overtake the car directly in front of it.\n"; break;
            case 1:
                decision = "The race car blocks the car behind it from overtaking it.\n"; break;
            case 2:
                decision = "The race car slows down to allow the car behind it to overtake it.\n"; break;
            default:
                decision = "The race car heads to the pitstop for an early maintenance.\n";

            TacticalDecision* instruction = new TacticalDecision(racecar, decision);
            instruction->executeInstruction();
            delete instruction;
        }
    } else
        std::cout << "DEBUG: Pitcrew cannot make a tactical decision as it is not assigned to a car.\n";
}