//
// Created by Ivan on 2020/11/01.
//

#ifndef COS214PROJECT_TYRE_H
#define COS214PROJECT_TYRE_H

#include "../Component.h"
#include "Compound.h"

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

    bool test();
    Component* clone();

private:
    Compound* state;
};


#endif //COS214PROJECT_TYRE_H
