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


public:
    /**
     * Default Constructor. Initialise generalRaceStrategy to ConservativeStart and components to null, windResistance to 10, downForce to 100 and carName to "Default Name"
     */
    Car();
    /**
     *  Deletes the generalRaceStrategy as well as each component within the components map
     */
    ~Car();

    /**
     * Clone method which will return a deep copy of the car.
    */
    Component* clone();
    Component* getComponent(string name);
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
     * A method that prints out the cars response to the given event.
     * @param event - The string event which the car should respond to.
     */
    void respondToEvent(string event);

    /**
     * Restores a car from a car memento
     * @param state a CarMemento that is used to restore the state
     */
    void restore(CarMemento* state);

    /**
     *
     * @return a CarMemento that will be saved inside a CarCareTaker
     */
    CarMemento* createMemento();

    /**
     * Iterates through the map containing components, then performs a softWareTest on each of those components (if they can perform such a test), if at least one component fails the test is failed
     * @return true if the test is passed and false if test is failed
     */
    bool softwareTest() override;

    /**
     * Iterates through the map containing components, then performs a windTunnelTest on each of those components (if they can perform such a test), if at least one component fails the test is failed
     * @return true if the test is passed and false if test is failed
     */
    bool windTunnelTest(int &tokens) override;

    /**
     * A function that returns the components map of the car.
     * @return map<string, Component*>
     */
    map<string,Component*> getComponents();

    /**
     * Used to print the components contained within the components map
     */
    void printComponents();
};
#endif //COS214PROJECT_CAR_H
