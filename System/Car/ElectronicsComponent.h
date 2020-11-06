//
// Created by bieldt on 2020/10/31.
//

#ifndef COS214PROJECT_ELECTRONICSCOMPONENT_H
#define COS214PROJECT_ELECTRONICSCOMPONENT_H

#include "Component.h"

class ElectronicsComponent: public Component{
private:
public:
    ElectronicsComponent();
    ElectronicsComponent(ElectronicsComponent*);
    ~ElectronicsComponent();

    Component* clone();
    void restore(ComponentCareTaker*);

};
#endif //COS214PROJECT_ELECTRONICSCOMPONENT_H
