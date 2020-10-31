#ifndef MINIMALPITSTOPS_H
#define MINIMALPITSTOPS_H
#include "GeneralRaceStrategy.h"

class MinimalPitstops: public GeneralRaceStrategy{
public:
    MinimalPitstops();
    virtual ~MinimalPitstops();
    void executeStrategy();
};

#endif