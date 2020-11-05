//
// Created by kyle-pc on 2020/11/02.
//

#include "TransportMethod.h"

template <typename T>
TransportMethod<T>::TransportMethod() {

}

template <typename T>
TransportMethod<T>::~TransportMethod() {

}

template <typename T>
void TransportMethod<T>::load(T component) {
    package(component);
    ship();
}

template <typename T>
T TransportMethod<T>::unload(std::string place) {
    return unpackage(place);
}
