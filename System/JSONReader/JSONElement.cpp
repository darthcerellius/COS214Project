//
// Created by kyle-pc on 2020/11/04.
//

#include <stdexcept>
#include "JSONElement.h"

JSONElement::JSONElement(std::string type, std::string element):
type(std::move(type)), value(std::move(element)), AbstractJSONReader("") {

}

JSONElement::operator std::string() const {
    if (type == "string") {
        return value;
    } else {
        return "";
    }
}

JSONElement::operator int() const {
    if (type == "int") {
        return std::stoi(value);
    } else {
        return 0;
    }
}

JSONElement::operator double() const {
    if (type == "double") {
        return std::stod(value);
    } else {
        return 1.0/0.0;
    }
}

AbstractJSONReader& JSONElement::operator[](std::string key) {
    throw std::runtime_error("Functon not allowed!");
}

AbstractJSONReader& JSONElement::operator[](int pos) {
    throw std::runtime_error("Functon not allowed!");
}

void JSONElement::addContext(std::string ctx) {

}
