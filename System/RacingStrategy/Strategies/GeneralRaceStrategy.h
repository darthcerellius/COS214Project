#ifndef GENERALRACESTRATEGY_H
#define GENERALRACESTRATEGY_H
#include <iostream>
/**
 * An Abstract class that defines an interface for the general strategies that will be used by the racecar. Acts
 * as the Strategy participant in the GeneralStrategy Strategy pattern. The child classes act as the Concrete
 * Strategy Participants.
 */
class GeneralRaceStrategy{
public:
    GeneralRaceStrategy();
    virtual ~GeneralRaceStrategy();
    virtual void executeStrategy() = 0; ///returns a string describing the strategy used by the car. Defined individually in child classes
    virtual GeneralRaceStrategy* clone() = 0;///Returns a deep copy of the current object. Defined individually in the child classes.
};

#endif