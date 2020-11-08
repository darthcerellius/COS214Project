//
// Created by jeanre on 2020/11/02.
//

#ifndef COS214PROJECT_COMPONENTSTORE_H
#define COS214PROJECT_COMPONENTSTORE_H
/**
 * @brief serves as the memento in the component's memento design pattern
 */
#include "ComponentCareTaker.h"
class ComponentStore {
private:
    ComponentCareTaker* memento;
public:
    ComponentStore();
    ~ComponentStore();
    void setMemento(ComponentCareTaker*);
    ComponentCareTaker* getMemento();
};


#endif //COS214PROJECT_COMPONENTSTORE_H
