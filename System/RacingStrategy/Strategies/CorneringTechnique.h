#ifndef CORNERINGTECHNIQUE_H
#define CORNERINGTECHNIQUE_H
#include "GeneralRaceStrategy.h"

class CorneringTechnique: public GeneralRaceStrategy{
public:
    CorneringTechnique();
    virtual ~CorneringTechnique();
    void executeStrategy();
};

#endif