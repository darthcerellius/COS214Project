//
// Created by kyle-pc on 2020/11/05.
//

#ifndef COS214PROJECT_ITERATOR_H
#define COS214PROJECT_ITERATOR_H
class RaceWeekend;

/** @brief Abstract class for iterator.

    The abstract class for an Iterator that will be used to iterate through
    the race weekend objects stored in the calendar as a vector.
    */

class Iterator
{
public:
    /** virtual default destructor */
    virtual ~Iterator() = default;
    /** virtual function to set first index */
    virtual void first() = 0;
    /** virtual function to set next index */
    virtual void next() = 0;
    /** virtual function to set last index */
    virtual bool isDone() = 0;
    /** virtual function to return RaceWeekend* at current index */
    virtual RaceWeekend* current() = 0;
};
#endif //COS214PROJECT_ITERATOR_H
