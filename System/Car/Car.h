//
// Created by bieldt on 2020/10/31.
//

#ifndef COS214PROJECT_CAR_H
#define COS214PROJECT_CAR_H

#include "Component.h"
#include "../RacingStrategy/Strategies/GeneralRaceStrategy.h"
#include<map>
class CareCareTaker;
class Car: public Component{
private:
    std::string carName;
    map<string,Component*> components;
    GeneralRaceStrategy* generalStrategy;
    double downForce;
    double windResistance;

public:
    Car();
    ~Car();
    Component* clone();
    void add(Component* c);
    void remove(string c);
    bool test();
    void setRaceStrategy(GeneralRaceStrategy* rs);
    void executeStrategy();
   // void avoidHazard(string hazard);          //commented out by Marco
    void makeTacticalDecision(string decision); // added by Marco, see commentary under Car::makeTacticalDecision() in Car.cpp
    void respondToEvent(string event);
    void restore(CarCareTaker*);
};
#endif //COS214PROJECT_CAR_H
