//
// Created by Marco on 02/11/2020.
//

#ifndef COS214PROJECT_NOEVENT_H
#define COS214PROJECT_NOEVENT_H
#include "RaceEvent.h"

class NoEvent: public RaceEvent {
public:
    NoEvent();
    ~NoEvent();
    std::string eventDescription();
};


#endif //COS214PROJECT_NOEVENT_H
