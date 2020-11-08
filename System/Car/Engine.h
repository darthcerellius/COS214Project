//
// Created by bieldt on 2020/10/31.
//

#ifndef COS214PROJECT_ENGINE_H
#define COS214PROJECT_ENGINE_H

#include "Component.h"
class ComponentMemento;

class Engine: public Component{
private:
    int HP; ///HP = horsepower
    int fuelConsumption; /// litres per km used by the engine

public:
    Engine();
    Engine(int,int);
    Engine(Engine* c);
    ~Engine();
    bool softwareTest() override;
    bool windTunnelTest(int tokens) override;
    Component* clone();
    int getHP();
    void setHP(int);
    int getFuelConsumption();
    void setFuelConsumption(int);
    void restore(ComponentMemento*);
    /**
     * Used to create a memento with the current state of the engine
     * @return ComponentMemento containing the state of the engine
     */
    ComponentMemento* createMemento();

};
#endif //COS214PROJECT_ENGINE_H
