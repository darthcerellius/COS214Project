//
// Created by hannes on 2020/10/31.
//

#include "AerodynamicsFactory.h"

AerodynamicsComponent *AerodynamicsFactory::constructComponent() {
    return new AerodynamicsComponent("AerodynamicsComponent");
}
