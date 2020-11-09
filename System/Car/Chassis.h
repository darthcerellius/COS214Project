//
// Created by bieldt on 2020/10/31.
//

#ifndef COS214PROJECT_CHASSIS_H
#define COS214PROJECT_CHASSIS_H
#include <cmath>
#include "Component.h"
class ComponentMemento;
class ComponentCareTaker;

/**
 * @brief The Chassis component for the car
 */
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
    /**
     * Used by the component caretaker to create a state of a component, in this case a chassis
     * the state will contain the values of the windResistance and downForce attributes
     *
     * @return a ComponentMemento object containing a state of the chassis
     */
    ComponentMemento* createMemento();
    /**
     *Will be used to restore the component to it's previous state
     *
     * @param state a ComponentMemento containing a previous state of the component
     */
    void restore(ComponentMemento* state);
    /**
     * Finds the minimum wind resistance and maximum downforce within 20 iterations of the following formula factor=tokens/100
     * then we add those tokens to the downforce and subtract it from the wind resistance
     *
     * @param tokens the number of tests in the wind tunnel left for the season
     * @return Returns true if test is passed and false if test is failed
     */
    bool windTunnelTest(int &tokens) override;
    /**
     * No software test can be performed on the chassis, therefore always returns  true
     *
     * @return Returns true
     */
    bool softwareTest() override;
};
#endif //COS214PROJECT_CHASSIS_H
