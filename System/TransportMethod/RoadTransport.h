//
// Created by kyle-pc on 2020/11/02.
//

#ifndef COS214PROJECT_ROADTRANSPORT_H
#define COS214PROJECT_ROADTRANSPORT_H

#include "TransportMethod.h"
#include "../Container/GoodsContainer.h"

class RoadTransport : public TransportMethod<GoodsContainer>{
public:
    RoadTransport();
    ~RoadTransport() override;

protected:
    void package(GoodsContainer component) override;
    void ship() override;
    GoodsContainer unpackage(std::string place) override;
};


#endif //COS214PROJECT_ROADTRANSPORT_H
