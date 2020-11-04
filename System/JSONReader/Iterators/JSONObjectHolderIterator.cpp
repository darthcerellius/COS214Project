//
// Created by kyle-pc on 2020/11/04.
//

#include "JSONObjectHolderIterator.h"
JSONObjectHolderIterator::JSONObjectHolderIterator(Iter2 i) : iter(i) {

}

AbstractJSONReader &JSONObjectHolderIterator::operator*() {
    return **iter;
}

void JSONObjectHolderIterator::operator++() {
    iter++;
}

bool JSONObjectHolderIterator::operator!=(JSONObjectHolderIterator &rhs) {
    return iter != rhs.iter;
}
