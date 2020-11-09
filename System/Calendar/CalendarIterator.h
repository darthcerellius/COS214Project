//
// Created by janine on 2020/11/02.
//

#ifndef COS214PROJECT_CALENDARITERATOR_H
#define COS214PROJECT_CALENDARITERATOR_H

#include <vector>
#include "Iterator.h"

/** @brief Concrete class for the Iterator class.

    The concrete class for an Iterator that will be used to iterate through
    the race weekend objects stored in calendar as a vector.
    */

class CalendarIterator : public Iterator
{
public:
    /** constructor to initialise vector */
    CalendarIterator(std::vector<RaceWeekend*> weekends);
    /** function to set first index */
    void first();
    /** function to set next index */
    void next();
    /** function to set last index */
    bool isDone();
    /** function to return RaceWeekend* at current index */
    RaceWeekend* current();

private:
    std::vector<RaceWeekend*> weekends; /** vector containing RaceWeekends* */
    int index = 0;  /** index for iterator set to 0 by default */
};

#endif //COS214PROJECT_CALENDARITERATOR_H
