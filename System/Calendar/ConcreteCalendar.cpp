//
// Created by janine on 2020/11/02.
//

#include "ConcreteCalendar.h"

CalendarIterator* ConcreteCalendar::createIterator(){
    return new CalendarIterator(weekends);
}