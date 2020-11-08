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
    /**
     *
     * @param fuelConsumption used to set the fuelConsumption variable
     * @param horsepower used to set the HP variable
     */
    Engine(int fuelConsumption,int horsepower );
    /**
     * Used to create an engine with the same variable values as the passed in parameter
     * @param c an engine object
     */
    Engine(Engine* c);
    ~Engine();
    /**
     * If HP is less than 600, the engine won't be able to compete against other engines, therefore it fails.
     * If the fuel consumption in litres/km is more than 2 the car will have to stop multiple times and wont't be able to win the race, therefore it will fail
     *
     * @return true if the test is passed and false if it is failed
     */
    bool softwareTest() override;
    /**
     *Engine cannot be tested in a wind tunnel, therefore returns true always
     *
     * @param tokens the number of windtunnel test still available to use during the season
     * @return true
     */
    bool windTunnelTest(int &tokens) override;
    Component* clone();
    int getHP();
    void setHP(int);
    int getFuelConsumption();
    void setFuelConsumption(int);
    /**
     * Used to restore the engine to a previous state
     *
     * @param state will be used to retrieve the values of the attributes of the previous state of engine
     */
    void restore(ComponentMemento* state);
    /**
     * Used to create a memento with the current state of the engine
     * @return ComponentMemento containing the state of the engine
     */
    ComponentMemento* createMemento();

};
#endif //COS214PROJECT_ENGINE_H
