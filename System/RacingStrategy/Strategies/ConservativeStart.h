#ifndef CONSERVATIVESTART_H
#define CONSERVATIVESTART_H
#include "GeneralRaceStrategy.h"

class ConservativeStart: public GeneralRaceStrategy{
public:
    ConservativeStart();
    virtual ~ConservativeStart();
    void executeStrategy();
};

#endif