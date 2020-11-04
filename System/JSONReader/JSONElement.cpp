//
// Created by kyle-pc on 2020/11/04.
//

#include <stdexcept>
#include "JSONElement.h"

JSONElement::JSONElement(std::string element): value(std::move(element)), AbstractJSONReader("") {

}

AbstractJSONReader& JSONElement::operator[](std::string key) {
    throw std::runtime_error("Functon not allowed!");
}

AbstractJSONReader& JSONElement::operator[](int pos) {
    throw std::runtime_error("Functon not allowed!");
}

void JSONElement::addContext(std::string ctx) {

}
