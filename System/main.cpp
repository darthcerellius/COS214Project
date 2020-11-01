#include <iostream>
#include "RacingStrategy/Strategies/CorneringTechnique.h"
#include "RacingStrategy/Strategies/ConservativeStart.h"
#include "RacingStrategy/Strategies/TaxiStyle.h"
#include "RacingStrategy/Strategies/InertiaDrift.h"
#include "RacingStrategy/Strategies/MinimalPitstops.h"
#include "RacingStrategy/StrategyTeam.h"
#include "Car/Car.h"

void testStrategy();

int main() {
    std::cout << "Hello, World!" << std::endl;
    testStrategy();
    return 0;
}

void testStrategy(){
    //------------------------Testing for Racing Strategy--------------------------
    Car* testVehicle = new Car();
    StrategyTeam* stratTeam = new StrategyTeam(testVehicle);
    const int chosenStrategy = 3;     //chosenStrategy must be [0,3]
    //0 = MinimalPitstops
    //1 = ConservativeStart
    //2 = TaxiStyle
    //3 = CorneringTechnique
    //4 = InertiaDrift
    stratTeam->decideStrategy(chosenStrategy);
    testVehicle->executeStrategy();
    delete stratTeam;
    delete testVehicle;
    //-----------------------------------------------------------------------------
}
