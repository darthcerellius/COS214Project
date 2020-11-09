//
// Created by jeanre on 2020/11/05.
//

#ifndef COS214PROJECT_CHASSISANDAEROSTATE_H
#define COS214PROJECT_CHASSISANDAEROSTATE_H
/**
 * @brief serves as a state in the component memento design pattern
 * Only serves as the state to a chassis or aerodynamic component
 *
 */
#include "ComponentState.h"
#include <string>
class ChassisAndAeroState : public ComponentState{
private:
    double downForce;///stores value the downforce of the chassis or aerodynamic component
    double windResistance;///stores the value of the windResistance variable in the chassis or aerodynamic component
public:
    void setDownForce(double);
    double getDownForce();
    void setWindResistance(double);
    double getWindResistance();
    ChassisAndAeroState(double,double,std::string);
    ChassisAndAeroState();
    void setName(std::string) override;

};


#endif //COS214PROJECT_CHASSISANDAEROSTATE_H
