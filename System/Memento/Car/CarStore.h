//
// Created by jeanre on 2020/11/02.
//

#ifndef COS214PROJECT_CARSTORE_H
#define COS214PROJECT_CARSTORE_H

#include "CarCareTaker.h"
class CarStore {
private:
    CarCareTaker* memento;
public:
    CarStore();
    ~CarStore();
    void setMemento(CarCareTaker*);
    CarCareTaker* getMemento();
};


#endif //COS214PROJECT_CARSTORE_H
