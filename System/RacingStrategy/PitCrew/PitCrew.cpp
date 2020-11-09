//
// Created by Marco on 31/10/2020.
//

#include "PitCrew.h"
#include "RaceEvents/NoEvent.h"
#include "Instructions/EventResponse.h"
#include "Instructions/TacticalDecision.h"

PitCrew::PitCrew(){
    racecar = 0;
    currentTyre = 0;
    currentEvent = new NoEvent();
    tyres = 0;
}

void PitCrew::setCar(Car * racecar) {
    this->racecar = racecar;
}

PitCrew::~PitCrew() {
    delete currentEvent;
    if(tyres) {
        racecar->remove("tyre");
        delete tyres;   //double check on this with Ruan
    }
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
        std::string decision;
        switch(decisionSelector){
            case 0:
                decision = "TACTICS: The race car speeds up to overtake the car directly in front of it."; break;
            case 1:
                decision = "TACTICS: The race car blocks the car behind it from overtaking it."; break;
            case 2:
                decision = "TACTICS: The race car slows down to allow the car behind it to overtake it."; break;
            default:
                decision = "TACTICS: The race car heads to the pitstop for an early maintenance."; break;
        }
        TacticalDecision* instruction = new TacticalDecision(racecar, decision);
        instruction->executeInstruction();
        delete instruction;
    } else
        std::cout << "DEBUG: Pitcrew cannot make a tactical decision as it is not assigned to a car.\n";
}

void PitCrew::observeNewEvent(RaceEvent * newEvent) {
    RaceEvent* temp = currentEvent; //NoEvent
    currentEvent = newEvent;
    respondToEvent();
    delete currentEvent; //delete this if segfault occurs
    currentEvent = temp;
}

void PitCrew::orderTyres(TyreSupplier* supplier) {
    std::cout << "STRATEGY: 5 sets of tyres have been ordered from the tyre supplier 5 months before the start of the race.\n";
    tyres = dynamic_cast<Tyre*>(supplier->supply());
    racecar->remove("tyre");
    racecar->add(tyres);
    currentTyre = 0;
    this->changeTyre();
}

void PitCrew::changeTyre() {
    if(currentTyre == 5){
        std::cout << "RACING: The car has used all 5 of its tyre sets allowed for this race and cannot change anymore tyres. It has to continue the race with its worn out tyres.\n";
        return;
    }
    tyres->change();
    currentTyre++;
    std::cout << "The car's tyres are replaced. The new tyres' compound: " << tyres->getCompound() << ". Tyre sets used for this race: " << currentTyre << std::endl;
}

Car* PitCrew::getCar(){
    return racecar;
}