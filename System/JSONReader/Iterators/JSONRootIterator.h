//
// Created by kyle-pc on 2020/11/04.
//

#ifndef COS214PROJECT_JSONROOTITERATOR_H
#define COS214PROJECT_JSONROOTITERATOR_H
#include <map>
#include <string>

class AbstractJSONReader;
using Iter = std::map<std::string, AbstractJSONReader*>::iterator;

class JSONRootIterator {
private:
    friend class JSONRoot;
    Iter iter;
    JSONRootIterator(Iter i);

public:
    std::pair<std::string, AbstractJSONReader&> operator*();
    void operator++();
    bool operator != (JSONRootIterator& rhs);
};


#endif //COS214PROJECT_JSONROOTITERATOR_H
