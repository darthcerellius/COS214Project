//
// Created by bieldt on 2020/10/31.
//

#ifndef COS214PROJECT_CAR_H
#define COS214PROJECT_CAR_H

#include "Component.h"
#include "../RacingStrategy/Strategies/GeneralRaceStrategy.h"
#include "../Car/Memento/Car/CarCareTaker.h"
#include<map>
class CarCareTaker;
class Car: public Component{
private:
    //Added this so that the Team manager can test individual components.
    friend class TestingCommand;
    std::string carName;
    map<string,Component*>* components;
    GeneralRaceStrategy* generalStrategy;
    double downForce;
    double windResistance;

public:
    Car();
    ~Car();
    Component* clone();
    void add(Component* c);
    void remove(string c);
    void setRaceStrategy(GeneralRaceStrategy* rs);
    void executeStrategy();
    GeneralRaceStrategy* getStrategy();
   // void avoidHazard(string hazard);          //commented out by Marco
    void makeTacticalDecision(string decision); // added by Marco, see commentary under Car::makeTacticalDecision() in Car.cpp
    void respondToEvent(string event);
    void restore(CarCareTaker*);
    CarCareTaker* createMemento();
    bool softwareTest() override;
    bool windTunnelTest() override;
    map<string,Component*>* getComponents();
};
#endif //COS214PROJECT_CAR_H
