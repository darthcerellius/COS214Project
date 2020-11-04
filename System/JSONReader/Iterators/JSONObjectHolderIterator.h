//
// Created by kyle-pc on 2020/11/04.
//

#ifndef COS214PROJECT_JSONOBJECTHOLDERITERATOR_H
#define COS214PROJECT_JSONOBJECTHOLDERITERATOR_H
#include <vector>
#include <string>

class AbstractJSONReader;
using Iter2 = std::vector<AbstractJSONReader*>::iterator;

class JSONObjectHolderIterator {
private:
    friend class JSONObjectHolder;
    Iter2 iter;
    JSONObjectHolderIterator(Iter2 i);

public:
    AbstractJSONReader& operator*();
    void operator++();
    bool operator != (JSONObjectHolderIterator& rhs);
};


#endif //COS214PROJECT_JSONOBJECTHOLDERITERATOR_H
