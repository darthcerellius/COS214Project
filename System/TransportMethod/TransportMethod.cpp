//
// Created by kyle-pc on 2020/11/02.
//

#include "TransportMethod.h"
#include "AirTransport.h"
#include "SeaTransport.h"
#include "RoadTransport.h"

template <typename T>
TransportMethod<T>::TransportMethod() {

}

template <typename T>
TransportMethod<T>::~TransportMethod() {

}

template <typename T>
TransportMethod<T>* TransportMethod<T>::createTransportMethod(TransportType type) {
    switch (type) {
        case AIR:
            return new AirTransport();
        case SEA:
            return new SeaTransport();
        default:
            return new RoadTransport();
    }
}

template <typename T>
void TransportMethod<T>::load(T* component) {
    package(component);
    ship();
}

template <typename T>
T* TransportMethod<T>::unload() {
    return unpackage();
}
