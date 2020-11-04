//
// Created by kyle-pc on 2020/11/04.
//

#include "DoubleElement.h"

DoubleElement::DoubleElement(std::string value) : JSONElement(std::move(value)) {

}

DoubleElement::operator std::string() const {
    return std::string();
}

DoubleElement::operator int() const {
    return 0;
}

DoubleElement::operator double() const {
    return std::stod(value);
}
