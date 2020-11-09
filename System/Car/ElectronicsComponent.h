//
// Created by bieldt on 2020/10/31.
//

#ifndef COS214PROJECT_ELECTRONICSCOMPONENT_H
#define COS214PROJECT_ELECTRONICSCOMPONENT_H

#include "Component.h"
#include <iostream>
#include <random>
class ElectronicsComponent: public Component{
private:
    string mode;
public:

    /**
     * Default constructor for an electronics component
     * */
    ElectronicsComponent();

    /**
     * Copy constructor for an electronics component
     * */
    ElectronicsComponent(ElectronicsComponent*);
    ~ElectronicsComponent();

    /**
     * A clone method which returns a deep copy of the Electronics Component
     * */
    Component* clone();

    /**
     * No implementation since electronics have no need to be tested in wind tunnel
     * */
    bool windTunnelTest(int &tokens) override;

    /**
     * No implementation since electronics have no need to be software tested
     * */

    bool softwareTest() override;

    /**
     * A method which sets the mode of the electronics to the passed in string
     * @param mode - The string description of the mode to be set
     * */
    void setMode(string mode);
};
#endif //COS214PROJECT_ELECTRONICSCOMPONENT_H
