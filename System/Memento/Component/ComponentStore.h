//
// Created by jeanre on 2020/11/02.
//

#ifndef COS214PROJECT_COMPONENTSTORE_H
#define COS214PROJECT_COMPONENTSTORE_H

#include "ComponentMemento.h"
class ComponentStore {
private:
    ComponentMemento* memento;
public:
    ComponentStore();
    ~ComponentStore();
    void setMemento(ComponentMemento*);
    ComponentMemento* getMemento();
};


#endif //COS214PROJECT_COMPONENTSTORE_H
