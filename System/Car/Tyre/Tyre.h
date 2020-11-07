//
// Created by Ivan on 2020/11/01.
//

#ifndef COS214PROJECT_TYRE_H
#define COS214PROJECT_TYRE_H
#include <iostream>
#include "../Component.h"


#include <cmath>
#include <random>
class Compound;

class Tyre: public Component {
public:
    Tyre(string name);
    Tyre(Tyre*);
    Tyre(Compound* state_);
    ~Tyre();
    void change();
    string getCompound();
    void setState(Compound* state_);

    bool softwareTest() override;
    bool windTunnelTest() override;
    Component* clone();

private:
    Compound* state;
};


#endif //COS214PROJECT_TYRE_H
