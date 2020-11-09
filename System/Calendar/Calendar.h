//
// Created by janine on 2020/11/02.
//

#ifndef COS214PROJECT_CALENDAR_H
#define COS214PROJECT_CALENDAR_H

#include <vector>
#include <fstream>
#include "../JSONReader/JSONObjectHolder.h"
#include "CalendarIterator.h"
#include "RaceWeekend.h"

/** @brief Abstract class for the Calendar class.

    The abstract calendar class that holds a vector of race weekends.
    */

class Calendar{
public:
    /** default constructor */
    Calendar();
    /** virtual default destructor */
    virtual ~Calendar();
    /** virtual creator for Iterator
        return new CalendarIterator*
    */
    virtual CalendarIterator* createIterator() = 0;
protected:
    std::vector<RaceWeekend*> weekends;     /** ctor containing RaceWeekends* */
};

#endif //COS214PROJECT_CALENDAR_CPP//

