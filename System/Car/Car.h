//
// Created by bieldt on 2020/10/31.
//

#ifndef COS214PROJECT_CAR_H
#define COS214PROJECT_CAR_H
/**
 * @brief
 */
#include "Component.h"
#include "../RacingStrategy/Strategies/GeneralRaceStrategy.h"
#include "../RacingStrategy/Strategies/ConservativeStart.h"

#include "../Car/Memento/Car/CarMemento.h"
#include<map>
class CarMemento;
class Car: public Component{
private:
    //Added this so that the Team manager can test individual components.
    friend class TestingCommand;
    std::string carName;
    map<string,Component*> components;
    GeneralRaceStrategy* generalStrategy;
    double downForce;
    double windResistance;

public:
    /**
     * Default Constructor. Initialise generalRaceStrategy and components to null.
     */
    Car();

    ~Car();

    /**
     * Clone method which will return a deep copy of the car.
    */
    Component* clone();

    /**
     * Method to add a component to the map of components.
     @param c - The component to be added to the car
     * */
    void add(Component* c);

    /**
     * Method removes a component with name c from the car.
     @param c - String name of the component to be removed.
     * */
    void remove(string c);

    /**
     * Method to set the cars GeneralRaceStrategy. Deletes the previous race strategy if it exists.
     * @param rs - GeneralRaceStrategy to be set.
     */
    void setRaceStrategy(GeneralRaceStrategy* rs);

    /**
     * A method which executes the current race strategy of the car.
     */
    void executeStrategy();

    /**
     * Returns the currently set race strategy of the car.
     * @return GeneralRaceStrategy*
     */
    GeneralRaceStrategy* getStrategy();

    /**
     * A method that lets the car make a tactical race decision.
     * @param decision - The decision to be made by the car.
     */
    void makeTacticalDecision(string decision); // added by Marco, see commentary under Car::makeTacticalDecision() in Car.cpp

    /**
     *
     * @param event
     */
    void respondToEvent(string event);

    /**
     * Restores a car from a car memento
     */
    void restore(CarMemento*);

    /**
     *
     * @return
     */
    CarMemento* createMemento();

    /**
     *
     * @return
     */
    bool softwareTest() override;

    /**
     *
     * @return
     */
    bool windTunnelTest() override;

    /**
     * A function that returns the components map of the car.
     * @return map<string, Component*>
     */
    map<string,Component*> getComponents();

    /**
     *
     */
    void printComponents();
};
#endif //COS214PROJECT_CAR_H
