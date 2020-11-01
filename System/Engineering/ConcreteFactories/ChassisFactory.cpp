//
// Created by hannes on 2020/10/31.
//

#include "ChassisFactory.h"

Chassis *ChassisFactory::constructComponent() {
    return new Chassis();
}
