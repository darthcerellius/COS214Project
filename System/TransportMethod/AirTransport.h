//
// Created by kyle-pc on 2020/11/02.
//

#ifndef COS214PROJECT_AIRTRANSPORT_H
#define COS214PROJECT_AIRTRANSPORT_H

#include "TransportMethod.h"
#include "../Car/Memento/Car/CarCareTaker.h"

class AirTransport : public TransportMethod<CarCareTaker*> {
public:
    AirTransport();
    ~AirTransport() override;

protected:
    void package(CarCareTaker* component) override;
    void ship() override;
    CarCareTaker* unpackage(std::string place) override;
};


#endif //COS214PROJECT_AIRTRANSPORT_H
