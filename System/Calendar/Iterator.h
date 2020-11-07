//
// Created by kyle-pc on 2020/11/05.
//

#ifndef COS214PROJECT_ITERATOR_H
#define COS214PROJECT_ITERATOR_H
class RaceWeekend;

class Iterator
{
public:
    virtual ~Iterator() = default;
    virtual void first() = 0;
    virtual void next() = 0;
    virtual bool isDone() = 0;
    virtual RaceWeekend* current() = 0;
};
#endif //COS214PROJECT_ITERATOR_H
