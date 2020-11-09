//
// Created by jeanre on 2020/11/02.
//

#ifndef COS214PROJECT_CARMEMENTO_H
#define COS214PROJECT_CARMEMENTO_H
/**
 * @brief Serves as the memento in the car memento design pattern
 *
 */
#include "CarState.h"

class CarMemento {
private:
    friend class Car;
    CarState* state; /** stores the state of the car */
    /** Setter that takes in all the member variables of the car objects and creates the CarState object using the parameters , this is used to preserve the values of the member variables of the car object
     * @param carName - the name of the car
     * @param componentName - the name of the component
     * @param component - the map of components that make up the car
     * @param strategy - the strategy that the car is following
     */
    void setMemento(std::string carName , std::string componentName, map<std::string, Component*> component,GeneralRaceStrategy* strategy);
    /**
     * @return the state of the car when the memento was created
     */
    CarState* getMemento();
    /** default constructor, sets the state to nullptr */
    CarMemento();

public:
    ~CarMemento();
};


#endif //COS214PROJECT_CARMEMENTO_H
