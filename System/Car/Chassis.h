//
// Created by bieldt on 2020/10/31.
//

#ifndef COS214PROJECT_CHASSIS_H
#define COS214PROJECT_CHASSIS_H

#include "Component.h"

class Chassis: public Component{
private:
    double downForce;
    double windResistance;
public:
    Chassis();
    Chassis(double,double);
    Chassis(Chassis* c);
    ~Chassis();
    bool test();
    Component* clone();
    void setDownForce(double);
    double getDownForce();
    void setWindResistance(double);
    double getWindResistance();
    ComponentCareTaker* createMemento();

};
#endif //COS214PROJECT_CHASSIS_H
