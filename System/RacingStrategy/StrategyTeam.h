//
// Created by Marco on 31/10/2020.
//

#ifndef COS214PROJECT_STRATEGYTEAM_H
#define COS214PROJECT_STRATEGYTEAM_H
#include <iostream>
#include "../Car/Car.h"
#include "../Engineering/EngineeringTeam.h"
#include "../Car/Tyre/TyreSupplier.h"

class StrategyTeam{
private:
    Car* raceCar;
public:
    StrategyTeam(Car*);
    StrategyTeam();
    ~StrategyTeam();
    void decideStrategy(int);
    void decideComponents(EngineeringTeam*);
};


#endif //COS214PROJECT_STRATEGYTEAM_H

/**
 * \class StrategyTeam
 * \brief The Strategy Team is responsible for choosing a general strategy for the racecar to follow per race, as well as selectign components that should be used when building the car
 */

/**
 * \var Car* raceCar
 * \brief A pointer to the race car object to which this team is assigned
*/

/**
 * \fn void StrategyTeam::decideStrategy(int)
 * \brief Selects one of five general strategies depending on input and assigns it to the car
*/

/**
 * \fn void decideComponents(EngineeringTeam*)
 * \brief Selects components to be used during the car construction and issues the construction of the car
*/