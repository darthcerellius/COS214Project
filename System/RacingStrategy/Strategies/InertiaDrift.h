#ifndef INERTIADRIFT_H
#define INERTIADRIFT_H
#include "GeneralRaceStrategy.h"

class InertiaDrift: public GeneralRaceStrategy{
public:
    InertiaDrift();
    virtual ~InertiaDrift();
    void executeStrategy();
    GeneralRaceStrategy* clone();
};

#endif