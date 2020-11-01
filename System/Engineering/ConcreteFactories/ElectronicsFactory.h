//
// Created by hannes on 2020/10/31.
//

#ifndef COS214PROJECT_ELECTRONICSFACTORY_H
#define COS214PROJECT_ELECTRONICSFACTORY_H

#include "../Factory.h"
#include "../../Car/ElectronicsComponent.h"

class ElectronicsFactory : public Factory{
public:
    ElectronicsComponent* constructComponent() override;
};


#endif //COS214PROJECT_ELECTRONICSFACTORY_H
