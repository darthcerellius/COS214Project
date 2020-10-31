//
// Created by bieldt on 2020/10/31.
//

#ifndef COS214PROJECT_CAR_H
#define COS214PROJECT_CAR_H

#include "Component.h"
#include "../RacingStrategy/Strategies/GeneralRaceStrategy.h"
#include<map>
class Car: public Component{
private:
    map<string,Component*> components;
    GeneralRaceStrategy* generalStrategy;
public:
    Car();
    ~Car();
    void add(Component* c);
    void remove(string c);
    bool test();
    void setRaceStrategy(GeneralRaceStrategy* rs);
    void executeStrategy();
    void avoidHazard(string hazard);
    void respondToEvent(string event);
};
#endif //COS214PROJECT_CAR_H
