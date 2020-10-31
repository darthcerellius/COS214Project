//
// Created by bieldt on 2020/10/31.
//

#ifndef COS214PROJECT_ELECTRONICSCOMPONENT_H
#define COS214PROJECT_ELECTRONICSCOMPONENT_H

#include "Component.h"

class ElectronicsComponent: public Component{
private:
public:
    ElectronicsComponent(string name);
    ElectronicsComponent(ElectronicsComponent*);
    ~ElectronicsComponent();
    bool test();
    Component* clone();

};
#endif //COS214PROJECT_ELECTRONICSCOMPONENT_H
