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

class Calendar{
public:
    Calendar();
    virtual ~Calendar();
    virtual CalendarIterator* createIterator() = 0;
protected:
    std::vector<RaceWeekend*> weekends;
};

#endif //COS214PROJECT_CALENDAR_CPP//

