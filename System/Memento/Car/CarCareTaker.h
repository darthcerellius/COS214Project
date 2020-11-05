//
// Created by jeanre on 2020/11/02.
//

#ifndef COS214PROJECT_CARCARETAKER_H
#define COS214PROJECT_CARCARETAKER_H

#include "CarState.h"
class CarCareTaker {
private:
    friend class CarState;
    CarState* state;
    void setMemento();
    CarState* getMemento();
    CarCareTaker();
    ~CarCareTaker();
};


#endif //COS214PROJECT_CARCARETAKER_H
