//
// Created by bieldt on 2020/10/31.
//

#ifndef COS214PROJECT_AERODYNAMICSCOMPONENT_H
#define COS214PROJECT_AERODYNAMICSCOMPONENT_H
/**
 * @brief Can be attached to a Car
 */
#include <cmath>
#include "Component.h"
class ComponentMemento;
class AerodynamicsComponent: public Component{
private:
    double downForce;
    double windResistance;
public:
    /**
     *
     * @param downForce sets the downForce variable
     * @param windResistance sets the windResistance variable
     */
    AerodynamicsComponent(double downForce,double windResistance);
    /**
     * Default constructor, sets downForce to 200 and windResistance to 50
     */
    AerodynamicsComponent();
    AerodynamicsComponent(AerodynamicsComponent* a);
    ~AerodynamicsComponent();
    Component* clone();
    double getDownForce();
    void setDownForce(double);
    double getWindResistance();
    void setWindResistance(double);
    /**
     * Used to restore the windResistance and downForce values to a previous state that was saved within the memento
     * @param state previous state of the AerodynamicsComponent
     */
    void restore(ComponentMemento*state);
    /**
     * Used to create a state of the current object
     * @return ComponentMemento that will be stored inside a ComponentCareTaker object
     */
    ComponentMemento* createMemento();
    /**
     * Used to perform a software test on the object
     * @return true since the AerodynamicComponent is deemed not to have a software test
     */
    bool softwareTest() override;
    /**
     * Used to perform a windtunnel test on the component, by first storing the state of the component
     * @return true if the test is passed and false if the test is failed
     */
    bool windTunnelTest(int tokens) override;
};
#endif //COS214PROJECT_AERODYNAMICSCOMPONENT_H
