//
// Created by bieldt on 2020/10/31.
//

#ifndef COS214PROJECT_ENGINE_H
#define COS214PROJECT_ENGINE_H

#include "Component.h"
class ComponentCareTaker;

class Engine: public Component{
private:
    int HP; //HP = horsepower
    int fuelConsumption; // litres per km used by the engine

public:
    Engine();
    Engine(int,int);
    Engine(Engine* c);
    ~Engine();
    bool test();
    Component* clone();
    int getHP();
    void setHP(int);
    int getFuelConsumption();
    void setFuelConsumption(int);
    void restore(ComponentCareTaker*);
    ComponentCareTaker* createMemento();

};
#endif //COS214PROJECT_ENGINE_H
