//
// Created by jeanre on 2020/11/02.
//

#ifndef COS214PROJECT_COMPONENTCARETAKER_H
#define COS214PROJECT_COMPONENTCARETAKER_H

#include "ComponentState.h"

class ComponentCareTaker {
private:
    friend class Component;
    ComponentState* state;
    void setMemento(double,double,std::string);
    ComponentState* getMemento();
    ComponentCareTaker();
public:
    ~ComponentCareTaker();
};


#endif //COS214PROJECT_COMPONENTCARETAKER_H
