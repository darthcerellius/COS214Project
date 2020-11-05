//
// Created by kyle-pc on 2020/10/28.
//

#include "EngineeringCommand.h"
#include "../../RacingStrategy/StrategyTeam.h"
#include "../../Car/Tyre/TyreSupplier.h"

EngineeringCommand::EngineeringCommand() {
}

void EngineeringCommand::execute(Car *car) {
    CurrentSeason::getStrategyTeam(car)->decideComponents(CurrentSeason::getEngineeringTeam())
    successor->execute(engTeam->getCar());
}
