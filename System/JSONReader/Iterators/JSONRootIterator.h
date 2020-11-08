//
// Created by kyle-pc on 2020/11/04.
//

#ifndef COS214PROJECT_JSONROOTITERATOR_H
#define COS214PROJECT_JSONROOTITERATOR_H
#include <map>
#include <string>

class AbstractJSONReader;
using Iter = std::map<std::string, AbstractJSONReader*>::iterator;

/** @brief An iterator for the JSONRoot class.
 *
 */
class JSONRootIterator {
private:
    friend class JSONRoot;
    Iter iter;
    JSONRootIterator(Iter i);

public:
    /**
     * Gets the key-value pair from the JSONRoot class
     * @return - an std::pair object with a string key and a AbstractJSONReader value
     */
    std::pair<std::string, AbstractJSONReader&> operator*();
    /**
     * Increments the iterator
     */
    void operator++();
    /**
     * Compares two JSONRootIterator classes
     * @param rhs - the class to compare to
     * @return - whether the iterators are equal or not
     */
    bool operator != (JSONRootIterator& rhs);
};


#endif //COS214PROJECT_JSONROOTITERATOR_H
