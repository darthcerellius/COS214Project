//
// Created by janine on 2020/11/02.
//

#ifndef COS214PROJECT_ITERATOR_CPP
#define COS214PROJECT_ITERATOR_CPP

#include "RaceWeekend.h"

class Iterator
{
public:
    virtual void first() = 0;
    virtual void next() = 0;
    virtual bool isDone() = 0;
    virtual RaceWeekend* current() = 0;
};

#endif //COS214PROJECT_ITERATOR_CPP
