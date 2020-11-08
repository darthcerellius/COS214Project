//
// Created by kyle-pc on 2020/11/04.
//

#ifndef COS214PROJECT_JSONOBJECTHOLDERITERATOR_H
#define COS214PROJECT_JSONOBJECTHOLDERITERATOR_H
#include <vector>
#include <string>

class AbstractJSONReader;
using Iter2 = std::vector<AbstractJSONReader*>::iterator;

/** @brief An iterator for the JSONObjectHolder class.
 *
 */
class JSONObjectHolderIterator {
private:
    friend class JSONObjectHolder;
    Iter2 iter;
    JSONObjectHolderIterator(Iter2 i);

public:
    /**
     * Gets an AbstractJSONReader class from the JSONObjectHolder class
     * @return - an AbstractJSONReader class
     */
    AbstractJSONReader& operator*();
    /**
     * Increments the iterator
     */
    void operator++();
    /**
    * Compares two JSONObjectHolderIterator classes
    * @param rhs - the class to compare to
    * @return - whether the iterators are equal or not
    */
    bool operator != (JSONObjectHolderIterator& rhs);
};


#endif //COS214PROJECT_JSONOBJECTHOLDERITERATOR_H
