//
// Created by janine on 2020/11/02.
//

#ifndef COS214PROJECT_CONCRETECALENDAR_H
#define COS214PROJECT_CONCRETECALENDAR_H

#include "Calendar.h"

/** @brief Concrete class for the Calendar class.

    The concrete calendar class that will create the Iterator for the race weekend vector.
    @author COS214 project group-TaskFailedSuccessfully
    @date November 2020
    */

class ConcreteCalendar : public Calendar{
public:
    /** creator for Iterator
        return new CalendarIterator*
    */
    CalendarIterator* createIterator();
};


#endif //COS214PROJECT_CONCRETECALENDAR_H
