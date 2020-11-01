//
// Created by hannes on 2020/10/31.
//

#ifndef COS214PROJECT_AERODYNAMICSFACTORY_H
#define COS214PROJECT_AERODYNAMICSFACTORY_H

#include "../Factory.h"
#include "../../Car/AerodynamicsComponent.h"


class AerodynamicsFactory : public Factory{
public:
    AerodynamicsComponent* constructComponent() override;
};


#endif //COS214PROJECT_AERODYNAMICSFACTORY_H
