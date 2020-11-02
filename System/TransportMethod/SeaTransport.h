//
// Created by kyle-pc on 2020/11/02.
//

#ifndef COS214PROJECT_SEATRANSPORT_H
#define COS214PROJECT_SEATRANSPORT_H

#include "TransportMethod.cpp"
#include "../Container/GoodsContainer.h"

class SeaTransport : public TransportMethod<GoodsContainer>{
public:
    SeaTransport();
    ~SeaTransport() override;

protected:
    void package(GoodsContainer* component) override;
    void ship() override;
    GoodsContainer* unpackage() override;
};


#endif //COS214PROJECT_SEATRANSPORT_H
