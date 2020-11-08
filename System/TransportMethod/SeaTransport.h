//
// Created by kyle-pc on 2020/11/02.
//

#ifndef COS214PROJECT_SEATRANSPORT_H
#define COS214PROJECT_SEATRANSPORT_H

#include "TransportMethod.h"
#include "../Container/GoodsContainer.h"

/**
 * @brief Transport GoodsContainers to non-European races
 */
class SeaTransport : public TransportMethod<GoodsContainer>{
public:
    SeaTransport();
    ~SeaTransport() override;

protected:
    void package(GoodsContainer component) override;
    void ship() override;
    GoodsContainer unpackage(std::string place) override;
};


#endif //COS214PROJECT_SEATRANSPORT_H
