//
// Created by Marco on 31/10/2020.
//

#ifndef SYSTEM_BROKENCOMPONENT_H
#define SYSTEM_BROKENCOMPONENT_H
#include "RaceEvent.h"

class BrokenComponent: public RaceEvent {
public:
    BrokenComponent();
    ~BrokenComponent();
    std::string eventDescription();
};


#endif //SYSTEM_BROKENCOMPONENT_H
