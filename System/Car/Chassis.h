//
// Created by bieldt on 2020/10/31.
//

#ifndef COS214PROJECT_CHASSIS_H
#define COS214PROJECT_CHASSIS_H

#include "Component.h"

class Chassis: public Component{
private:
public:
    Chassis();
    Chassis(Chassis* c);
    ~Chassis();
    bool test();
    Component* clone();
};
#endif //COS214PROJECT_CHASSIS_H
