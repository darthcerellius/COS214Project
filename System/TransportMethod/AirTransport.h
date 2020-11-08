//
// Created by kyle-pc on 2020/11/02.
//

#ifndef COS214PROJECT_AIRTRANSPORT_H
#define COS214PROJECT_AIRTRANSPORT_H

#include "TransportMethod.h"
#include "../Car/Car.h"

/**
 * @brief Ships cars to the race tracks.
 */
class AirTransport : public TransportMethod<Car*>{
public:
    AirTransport();
    ~AirTransport() override;

protected:
    void package(Car* component) override;
    void ship() override;
    Car* unpackage(std::string place) override;
};


#endif //COS214PROJECT_AIRTRANSPORT_H
