#ifndef TAXISTYLE_H
#define TAXISTYLE_H
#include "GeneralRaceStrategy.h"

class TaxiStyle: public GeneralRaceStrategy{
public:
    TaxiStyle();
    virtual ~TaxiStyle();
    void executeStrategy();
    GeneralRaceStrategy* clone();
};

#endif