#ifndef GENERALRACESTRATEGY_H
#define GENERALRACESTRATEGY_H
#include <iostream>
class GeneralRaceStrategy{
public:
    GeneralRaceStrategy();
    virtual ~GeneralRaceStrategy();
    virtual void executeStrategy() = 0;
    virtual GeneralRaceStrategy* clone() = 0;
};

#endif