//
// Created by Marco on 31/10/2020.
//

#ifndef SYSTEM_SAFETYCAR_H
#define SYSTEM_SAFETYCAR_H
#include "RaceEvent.h"

class SafetyCar: public RaceEvent {
public:
    SafetyCar();
    ~SafetyCar();
    std::string eventDescription();
};


#endif //SYSTEM_SAFETYCAR_H
