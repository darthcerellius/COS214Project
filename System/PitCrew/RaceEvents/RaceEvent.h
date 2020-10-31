//
// Created by Marco on 31/10/2020.
//

#ifndef SYSTEM_RACEEVENT_H
#define SYSTEM_RACEEVENT_H
#include <iostream>
#include <string>

class RaceEvent {
public:
    RaceEvent();
    virtual ~RaceEvent();
    virtual string eventDescription() = 0;
};


#endif //SYSTEM_RACEEVENT_H
