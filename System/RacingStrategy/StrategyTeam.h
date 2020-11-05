//
// Created by Marco on 31/10/2020.
//

#ifndef COS214PROJECT_STRATEGYTEAM_H
#define COS214PROJECT_STRATEGYTEAM_H
#include <iostream>
#include "../Car/Car.h"
#include "../Engineering/AbstractEngineeringTeam.h"
#include "../Car/Tyre/TyreSupplier.h"

class StrategyTeam{
private:
    Car* raceCar;
public:
    StrategyTeam(Car*);
    StrategyTeam();
    ~StrategyTeam();
    void decideStrategy(int);
    void decideComponents(AbstractEngineeringTeam*);
};


#endif //COS214PROJECT_STRATEGYTEAM_H
