//
// Created by kyle-pc on 2020/10/28.
//

#include "StrategyCommand.h"
#include "../../RacingStrategy/StrategyTeam.h"
#include <ctime>

void StrategyCommand::execute(Car *car) {
    CurrentSeason::getStrategyTeam()->decideStrategy(rand() % 5);
    CurrentSeason::getStrategyTeam()->decideComponents(CurrentSeason::getEngineeringTeam());
    if (successor != nullptr) {
        successor->execute(car);
    }
}

