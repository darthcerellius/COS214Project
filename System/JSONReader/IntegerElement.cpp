//
// Created by kyle-pc on 2020/11/04.
//

#include "IntegerElement.h"

IntegerElement::IntegerElement(std::string value) : JSONElement(std::move(value)) {

}

IntegerElement::operator std::string() const {
    return std::string();
}

IntegerElement::operator int() const {
    return std::stoi(value);
}

IntegerElement::operator double() const {
    return 1.0/0.0;
}
