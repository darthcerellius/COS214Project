//
// Created by janine on 2020/11/02.
//

#ifndef COS214PROJECT_CALENDAR_CPP
#define COS214PROJECT_CALENDAR_CPP

#include <vector>
#include "CalendarIterator.h"
#include "RaceWeekend.h"

class Calendar{
public:
    virtual CalendarIterator* createIterator(std::vector<RaceWeekend*> weekends) = 0;
protected:
    std::vector<RaceWeekend*> weekends;
};

#endif //COS214PROJECT_CALENDAR_CPP