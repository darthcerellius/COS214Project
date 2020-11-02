//
// Created by janine on 2020/11/02.
//

#include "ConcreteCalendar.h"

CalendarIterator* ConcreteCalendar::createIterator(std::vector<RaceWeekend*> weekends){
    return new CalendarIterator(weekends);
}