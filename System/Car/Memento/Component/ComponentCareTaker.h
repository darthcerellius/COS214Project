//
// Created by jeanre on 2020/11/02.
//

#ifndef COS214PROJECT_COMPONENTCARETAKER_H
#define COS214PROJECT_COMPONENTCARETAKER_H
/**
 * @brief serves as the caretaker in the component memento design pattern
 *
 *
 * @author Jeanre du Plessis
 */
#include "ComponentState.h"
#include "EngineState.h"
#include <iostream>

#include "ChassisAndAeroState.h"


class Engine;
class AerodynamicsComponent;
class Chassis;
class Component;

class ComponentCareTaker {
private:
    friend class Component;
    friend class AerodynamicsComponent;
    friend class Engine;
    friend class Chassis;
    ComponentState* state; ///stores a state of the component
    void setMemento(Component*);
    ComponentState* getMemento();
public:
    ComponentCareTaker();
    ~ComponentCareTaker();
};


#endif //COS214PROJECT_COMPONENTCARETAKER_H
