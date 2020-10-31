//
// Created by Marco on 31/10/2020.
//

#ifndef SYSTEM_REDFLAG_H
#define SYSTEM_REDFLAG_H
#include "RaceEvent.h"

class RedFlag: public RaceEvent {
public:
    RedFlag();
    ~RedFlag();
    string eventDescription();
};


#endif //SYSTEM_REDFLAG_H
