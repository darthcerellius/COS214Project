//
// Created by jeanre on 2020/11/02.
//

#ifndef COS214PROJECT_COMPONENTMEMENTO_H
#define COS214PROJECT_COMPONENTMEMENTO_H

#include "ComponentState.h"
class ComponentMemento {
private:
    friend class Component;
    ComponentState* state;
    void setMemento();
    ComponentState* getMemento();
public:
    ~ComponentMemento();
};


#endif //COS214PROJECT_COMPONENTMEMENTO_H
