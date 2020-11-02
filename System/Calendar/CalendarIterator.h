//
// Created by janine on 2020/11/02.
//

#ifndef COS214PROJECT_CALENDARITERATOR_H
#define COS214PROJECT_CALENDARITERATOR_H

#include <vector>
#include "Iterator.cpp"
#include "RaceWeekend.h"

class CalendarIterator : public Iterator
{
public:
    CalendarIterator(std::vector<RaceWeekend*> weekends);
    void first();
    void next();
    bool isDone();
    RaceWeekend* current();

private:
    std::vector<RaceWeekend*> weekends;
    int index = 0;
};

#endif //COS214PROJECT_CALENDARITERATOR_H
