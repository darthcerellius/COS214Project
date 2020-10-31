//
// Created by bieldt on 2020/10/31.
//

#ifndef COS214PROJECT_AERODYNAMICSCOMPONENT_H
#define COS214PROJECT_AERODYNAMICSCOMPONENT_H

#include "Component.h"

class AerodynamicsComponent: public Component{
private:

public:
    AerodynamicsComponent(string name);
    AerodynamicsComponent(AerodynamicsComponent* a);
    ~AerodynamicsComponent();
    void add(Component* c);
    bool test();
    Component* clone();
};
#endif //COS214PROJECT_AERODYNAMICSCOMPONENT_H
