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
    ComponentMemento* memento;  ///stores the memento of the component's memento design pattern
public:
    ComponentCareTaker(); ///default constructor
    ~ComponentCareTaker();
    /**
     *
     * @param newMemento used to set the ComponentMemento variable
     */
    void setMemento(ComponentMemento* newMemento);
    /**
     *
     * @return stored memento object
     */
    ComponentMemento* getMemento();
};


#endif //COS214PROJECT_COMPONENTCARETAKER_H
