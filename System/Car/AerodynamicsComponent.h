//
// Created by bieldt on 2020/10/31.
//

#ifndef COS214PROJECT_AERODYNAMICSCOMPONENT_H
#define COS214PROJECT_AERODYNAMICSCOMPONENT_H
#include "../Memento/Component/ComponentCareTaker.h"

#include "Component.h"

class AerodynamicsComponent: public Component{
private:
    double downForce;
    double windResistance;
public:
    AerodynamicsComponent(double,double);
    AerodynamicsComponent();
    AerodynamicsComponent(AerodynamicsComponent* a);
    ~AerodynamicsComponent();
    bool test();
    Component* clone();
    double getDownForce();
    void setDownForce(double);
    double getWindResistance();
    void setWindResistance(double);
};
#endif //COS214PROJECT_AERODYNAMICSCOMPONENT_H
