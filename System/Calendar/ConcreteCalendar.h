//
// Created by janine on 2020/11/02.
//

#ifndef COS214PROJECT_CONCRETECALENDAR_H
#define COS214PROJECT_CONCRETECALENDAR_H

#include "Calendar.h"

class ConcreteCalendar : public Calendar{
public:
    CalendarIterator* createIterator();
};


#endif //COS214PROJECT_CONCRETECALENDAR_H
