//
// Created by kyle-pc on 2020/11/04.
//

#include "JSONRootIterator.h"
JSONRootIterator::JSONRootIterator(Iter i) : iter(i){

}

std::pair<std::string, AbstractJSONReader &> JSONRootIterator::operator*() {
    std::pair<std::string, AbstractJSONReader&> newPair(iter->first, *(iter->second));
    return newPair;
}

void JSONRootIterator::operator++() {
    iter++;
}

bool JSONRootIterator::operator!=(JSONRootIterator &rhs) {
    return this->iter != rhs.iter;
}
