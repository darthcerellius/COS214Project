//
// Created by kyle-pc on 2020/10/28.
//

#include "StrategyCommand.h"
#include "../../RacingStrategy/StrategyTeam.h"

void StrategyCommand::execute(Car *car) {
    /*TODO: READ WEATHER INFORMATION FROM THE CALENDAR TO INFLUENCE STRATEGY DECISION */
    CurrentSeason::getStrategyTeam(car)->decideStrategy(0);
    successor->execute(car);
}