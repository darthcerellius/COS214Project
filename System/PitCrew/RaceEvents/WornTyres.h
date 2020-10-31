//
// Created by Marco on 31/10/2020.
//

#ifndef SYSTEM_WORNTYRES_H
#define SYSTEM_WORNTYRES_H
#include "RaceEvent.h"

class WornTyres: public RaceEvent {
public:
    WornTyres();
    ~WornTyres();
    string eventDescription();
};


#endif //SYSTEM_WORNTYRES_H
