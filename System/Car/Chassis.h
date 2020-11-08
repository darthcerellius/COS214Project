//
// Created by bieldt on 2020/10/31.
//

#ifndef COS214PROJECT_CHASSIS_H
#define COS214PROJECT_CHASSIS_H
#include <cmath>
#include "Component.h"
class ComponentMemento;
class ComponentCareTaker;
class Chassis: public Component{
private:
    double downForce;
    double windResistance;
public:
    Chassis();
    Chassis(double,double);
    Chassis(Chassis* c);
    ~Chassis();
    Component* clone();
    void setDownForce(double);
    double getDownForce();
    void setWindResistance(double);
    double getWindResistance();
    ComponentMemento* createMemento();
    void restore(ComponentMemento*);
    bool windTunnelTest(int &tokens) override;
    bool softwareTest() override;
};
#endif //COS214PROJECT_CHASSIS_H
