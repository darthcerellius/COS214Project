//
// Created by jeanre on 2020/11/05.
//

#ifndef COS214PROJECT_CHASSISANDAEROSTATE_H
#define COS214PROJECT_CHASSISANDAEROSTATE_H
#include "ComponentState.h"
#include <string>
class ChassisAndAeroState : public ComponentState{
private:
    double downForce;
    double windResistance;
public:
    void setDownForce(double);
    double getDownForce();
    void setWindResistance(double);
    double getWindResistance();
    ChassisAndAeroState(double,double,std::string);
    ChassisAndAeroState();
};


#endif //COS214PROJECT_CHASSISANDAEROSTATE_H
