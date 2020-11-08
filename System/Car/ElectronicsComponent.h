//
// Created by bieldt on 2020/10/31.
//

#ifndef COS214PROJECT_ELECTRONICSCOMPONENT_H
#define COS214PROJECT_ELECTRONICSCOMPONENT_H

#include "Component.h"
#include <iostream>
#include <random>
class ElectronicsComponent: public Component{
private:
public:
    ElectronicsComponent();
    ElectronicsComponent(ElectronicsComponent*);
    ~ElectronicsComponent();

    Component* clone();
    bool windTunnelTest(int tokens) override;
    bool softwareTest() override;
};
#endif //COS214PROJECT_ELECTRONICSCOMPONENT_H
