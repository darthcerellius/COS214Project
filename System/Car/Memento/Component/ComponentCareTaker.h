//
// Created by jeanre on 2020/11/02.
//

#ifndef COS214PROJECT_COMPONENTCARETAKER_H
#define COS214PROJECT_COMPONENTCARETAKER_H
/**
 * @brief serves as the memento in the component's memento design pattern
 */
#include "ComponentMemento.h"
class ComponentCareTaker {
private:
    ComponentMemento* memento;
public:
    ComponentCareTaker();
    ~ComponentCareTaker();
    void setMemento(ComponentMemento*);
    ComponentMemento* getMemento();
};


#endif //COS214PROJECT_COMPONENTCARETAKER_H
