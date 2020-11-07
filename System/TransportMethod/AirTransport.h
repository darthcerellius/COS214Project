//
// Created by kyle-pc on 2020/11/02.
//

#ifndef COS214PROJECT_AIRTRANSPORT_H
#define COS214PROJECT_AIRTRANSPORT_H

#include "TransportMethod.h"
#include "../Car/Car.h"

class AirTransport {
public:
    AirTransport();
    ~AirTransport();
    void package(Car* component);
    void ship();
    Car* unpackage(std::string place);

private:
    Car* shippingContainer;
};


#endif //COS214PROJECT_AIRTRANSPORT_H
