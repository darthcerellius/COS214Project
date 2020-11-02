//
// Created by Marco on 31/10/2020.
//

#ifndef SYSTEM_RACEEVENT_H
#define SYSTEM_RACEEVENT_H
#include <iostream>
#include <string>
#include "../PitCrew.h"

class PitCrew;

class RaceEvent {
public:
    RaceEvent();
    virtual ~RaceEvent();
    virtual std::string eventDescription() = 0;
    void changeEvent(PitCrew*);
};


#endif //SYSTEM_RACEEVENT_H
