//
// Created by Marco on 31/10/2020.
//

#ifndef SYSTEM_YELLOWFLAG_H
#define SYSTEM_YELLOWFLAG_H
#include "RaceEvent.h"

class YellowFlag: public RaceEvent {
public:
    YellowFlag();
    ~YellowFlag();
    std::string eventDescription();
};


#endif //SYSTEM_YELLOWFLAG_H
