//
// Created by jeanre on 2020/11/02.
//

#ifndef COS214PROJECT_CARCARETAKER_H
#define COS214PROJECT_CARCARETAKER_H
/**
 * @brief Serves as the Caretaker in the car memento design pattern
 *
 * @author Jeanre du Plessis
 */
#include "CarState.h"

class CarCareTaker {
private:
    friend class Car;
    CarState* state; /** stores the state of the car */
    /** Setter that takes in all the member variables of the car objects and creates the CarState object using the parameters , this is used to preserve the values of the member variables of the car object
     * @param carName - the name of the car
     * @param componentName - the name of the component
     * @param component - the map of components that make up the car
     * @param strategy - the strategy that the car is following
     * @param windResistance - the wind resistance of the car
     * @param downForce - the downforce of the car
     */
    void setMemento(std::string carName , std::string componentName, map<std::string, Component*> component,GeneralRaceStrategy* strategy,double windResistance,double downForce);
    /**
     * @return the state of the car when the memento was created
     */
    CarState* getMemento();
    /** default constructor, sets the state to nullptr */
    CarCareTaker();

public:
    ~CarCareTaker();
};


#endif //COS214PROJECT_CARCARETAKER_H
