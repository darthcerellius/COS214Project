//
// Created by janine on 2020/11/02.
//

#ifndef COS214PROJECT_CONCRETECALENDAR_H
#define COS214PROJECT_CONCRETECALENDAR_H

#include "Calendar.cpp"

class ConcreteCalendar{
public:
    CalendarIterator* createIterator(std::vector<RaceWeekend*> weekends);
};


#endif //COS214PROJECT_CONCRETECALENDAR_H
