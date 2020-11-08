//
// Created by bieldt on 2020/10/31.
//

#ifndef COS214PROJECT_AERODYNAMICSCOMPONENT_H
#define COS214PROJECT_AERODYNAMICSCOMPONENT_H

#include <cmath>
#include "Component.h"
class ComponentMemento;
class AerodynamicsComponent: public Component{
private:
    double downForce;
    double windResistance;
public:
    AerodynamicsComponent(double,double);
    AerodynamicsComponent();
    AerodynamicsComponent(AerodynamicsComponent* a);
    ~AerodynamicsComponent();
    Component* clone();
    double getDownForce();
    void setDownForce(double);
    double getWindResistance();
    void setWindResistance(double);
    void restore(ComponentMemento*);
    ComponentMemento* createMemento();
    bool softwareTest() override;
    bool windTunnelTest() override;
};
#endif //COS214PROJECT_AERODYNAMICSCOMPONENT_H
