//
// Created by bieldt on 2020/10/31.
//

#ifndef COS214PROJECT_ENGINE_H
#define COS214PROJECT_ENGINE_H

#include "Component.h"

class Engine: public Component{
private:
    int HP; //HP = horsepower
    int fuelConsumption;

public:
    Engine();
    Engine(int,int);
    Engine(Engine* c);
    ~Engine();
    bool test();
    Component* clone();
    int getHP();
    void setHP(int);

};
#endif //COS214PROJECT_ENGINE_H
