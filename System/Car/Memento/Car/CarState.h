//
// Created by jeanre on 2020/11/02.
//

#ifndef COS214PROJECT_CARSTATE_H
#define COS214PROJECT_CARSTATE_H
/**
 * @brief stores the state of the car
 *
 */

#include "../../Component.h"
#include "../../../RacingStrategy/Strategies/GeneralRaceStrategy.h"
#include <map>
#include <string>
class CarState {
private:
    std::string carName;/** stores the name of the car */
    std::string name;/** stores the name of the component */
    map<std::string,Component*> components;/** stores the map of components that was present when the memento was created */
    GeneralRaceStrategy* strategy;/** stores the strategy that the car was following when the memento was created */
    double windResistance;/** stores the wind resistance of the car when the memento was created */
    double downForce;/** stores the downforce of the car when the memento was created */
public:
    ~CarState();
    CarState();///default constructor
    /** Constructor that takes in all the member variables of the car objects and sets the variables to the parameters passed in, this is used to preserve the values of the member variables of the car object
   * @param carName - the name of the car
   * @param name - the name of the component
   * @param components - the map of components that make up the car
   * @param strategy1 - the strategy that the car is following
   */
    CarState(std::string carName, std::string name, map<std::string , Component*> components,GeneralRaceStrategy* strategy1);
    map<std::string, Component*> getComponents();
    void setComponents(map<std::string,Component*> newComponents);
    std::string getName();
    void setName(std::string newComponentName);
    void setCarName(std::string newCarName);
    std::string getCarName();
    void setStrategy(GeneralRaceStrategy* newStrat);
    GeneralRaceStrategy* getStrategy();





};




#endif //COS214PROJECT_CARSTATE_H
