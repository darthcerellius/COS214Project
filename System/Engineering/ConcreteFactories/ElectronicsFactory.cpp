//
// Created by hannes on 2020/10/31.
//

#include "ElectronicsFactory.h"

ElectronicsComponent *ElectronicsFactory::constructComponent() {
    return new ElectronicsComponent("ElectronicsComponent");
}
