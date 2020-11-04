//
// Created by kyle-pc on 2020/11/04.
//

#include "StringElement.h"

StringElement::StringElement(std::string value) : JSONElement(std::move(value)) {

}

StringElement::operator std::string() const {
    return value;
}

StringElement::operator int() const {
    return 0;
}

StringElement::operator double() const {
    return 1.0/0.0;
}
