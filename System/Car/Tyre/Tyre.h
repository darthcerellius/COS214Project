//
// Created by Ivan on 2020/11/01.
//

#ifndef COS214PROJECT_TYRE_H
#define COS214PROJECT_TYRE_H
#include <iostream>
#include "../Component.h"


#include <cmath>
#include <random>

/**
 * The Tyre acts as both the Concrete Product created by the TyreSupplier Concrete Creator for the Factory Pattern, as well as the Context participant in the State Pattern
 * The Tyre will change its compound State when its change() method is called. Initially it starts with a soft compound, changed to a medium compound, and then to a hard compound.
 * If it's State is a hard compound, and it changes, it will change to a soft compound again.
 */

class Compound;

class Tyre: public Component {
public:
    Tyre(string name);
    Tyre(Tyre*);
    Tyre(Compound* state_);
    ~Tyre();
    void change();///changes the State of the Tyre by calling the handleChange() function of the Compound class
    string getCompound();///Returns a string indicating the current Compound the Tyre has
    void setState(Compound* state_);///Changes the Compound to whichever Compound is passed in its parameter (i.e. Soft, Medium or Hard)

    bool softwareTest() override;
    bool windTunnelTest(int tokens) override;
    Component* clone();

private:
    Compound* state;
};


#endif //COS214PROJECT_TYRE_H
