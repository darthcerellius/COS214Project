//
// Created by jeanre on 2020/11/02.
//

#ifndef COS214PROJECT_CARCARETAKER_H
#define COS214PROJECT_CARCARETAKER_H

#include "CarState.h"

class CarCareTaker {
private:
    friend class Car;
    CarState* state;
    void setMemento(std::string, std::string, map<std::string, Component*>,GeneralRaceStrategy*,double,double);
    CarState* getMemento();
    CarCareTaker();

public:
    ~CarCareTaker();
};


#endif //COS214PROJECT_CARCARETAKER_H
