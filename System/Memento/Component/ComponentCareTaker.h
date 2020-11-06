//
// Created by jeanre on 2020/11/02.
//

#ifndef COS214PROJECT_COMPONENTCARETAKER_H
#define COS214PROJECT_COMPONENTCARETAKER_H

#include "ComponentState.h"
#include "EngineState.h"
#include <iostream>

#include "ChassisAndAeroState.h"

#include "../../Car/Chassis.h"
#include "../../Car/Engine.h"
#include "../../Car/AerodynamicsComponent.h"
#include "../../Car/Component.h"

class ComponentCareTaker {
private:
    friend class Component;
    ComponentState* state;
    void setMemento(Component*);
    ComponentState* getMemento();
    ComponentCareTaker();
public:
    ~ComponentCareTaker();
};


#endif //COS214PROJECT_COMPONENTCARETAKER_H
