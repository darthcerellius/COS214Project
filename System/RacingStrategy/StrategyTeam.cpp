//
// Created by Marco on 31/10/2020.
//

#include "StrategyTeam.h"
#include "Strategies/MinimalPitstops.h"
#include "Strategies/ConservativeStart.h"
#include "Strategies/TaxiStyle.h"
#include "Strategies/CorneringTechnique.h"
#include "Strategies/InertiaDrift.h"

StrategyTeam::StrategyTeam(){
    this->raceCar = 0;
    std::cout << "A strategy team for the next season has been selected.\n";
}

StrategyTeam::StrategyTeam(Car* raceCar) {
    this->raceCar = raceCar;
    std::cout << "A strategy team for the next season has been selected.\n";
}

StrategyTeam::~StrategyTeam(){}

void StrategyTeam::decideStrategy(int strategyDecider) {
    //strategyDecider should be a randomly generated number between 0 and 4 to determine which strategy will be used per race
    GeneralRaceStrategy* chosenStrategy = 0;
    switch (strategyDecider) {
        case 0:
            chosenStrategy = new MinimalPitstops(); break;
        case 1:
            chosenStrategy = new ConservativeStart(); break;
        case 2:
            chosenStrategy = new TaxiStyle(); break;
        case 3:
            chosenStrategy = new CorneringTechnique(); break;
        case 4:
            chosenStrategy = new InertiaDrift(); break;
        default:
            std::cout << "The strategy team received an invalid input to choose a general race strategy. Received input: " << strategyDecider << std::endl;
    }

    if(raceCar){
        //raceCar->generalStrategy = chosenStrategy; //this is valid since StrategyTeam is a friend class of Car
        std::cout << "The strategy team has decided on a general race strategy for the car to follow for this race.\n";
    }
    else
        std::cout << "The strategy team has not been assigned a race car for the season, and thus cannot decide on a general race strategy.\n";

}