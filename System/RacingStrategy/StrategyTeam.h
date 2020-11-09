//
// Created by Marco on 31/10/2020.
//

#ifndef COS214PROJECT_STRATEGYTEAM_H
#define COS214PROJECT_STRATEGYTEAM_H
#include <iostream>
#include "../Car/Car.h"
#include "../Engineering/EngineeringTeam.h"
#include "../Car/Tyre/TyreSupplier.h"

/**
 * The Strategy Team is responsible for choosing a general strategy for the racecar to follow per race, as well as selecting components that should be used when building the car.
 * StrategyTeam acts as the Director participant in the Builder pattern when constructing the car.
 */

class StrategyTeam{
private:
    Car* raceCar;
public:
    StrategyTeam(Car*);
    StrategyTeam();
    ~StrategyTeam();
    void decideStrategy(int); ///Selects and sets the generalStrategy that will be used by the racecar per race.
    void decideComponents(EngineeringTeam* eng);///Decides an Electronic component for a car.
    void setCar(Car*);
};


#endif //COS214PROJECT_STRATEGYTEAM_H