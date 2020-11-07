//
// Created by kyle-pc on 2020/11/02.
//

#ifndef COS214PROJECT_AIRTRANSPORT_H
#define COS214PROJECT_AIRTRANSPORT_H

#include "TransportMethod.h"
#include "../Car/Memento/Component/ComponentCareTaker.h"

class AirTransport : public TransportMethod<ComponentCareTaker> {
public:
    AirTransport();
    ~AirTransport() override;

protected:
    void package(ComponentCareTaker component) override;
    void ship() override;
    ComponentCareTaker unpackage(std::string place) override;
};


#endif //COS214PROJECT_AIRTRANSPORT_H
