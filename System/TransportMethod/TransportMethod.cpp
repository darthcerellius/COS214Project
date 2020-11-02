//
// Created by kyle-pc on 2020/11/02.
//

#include "TransportMethod.h"
#include "AirTransport.h"
#include "SeaTransport.h"
#include "RoadTransport.h"

TransportMethod::TransportMethod() {

}

TransportMethod::~TransportMethod() {

}

TransportMethod *TransportMethod::createTransportMethod(TransportType type) {
    switch (type) {
        case AIR:
            return new AirTransport();
        case SEA:
            return new SeaTransport();
        default:
            return new RoadTransport();
    }
}
