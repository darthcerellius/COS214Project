//
// Created by kyle-pc on 2020/10/28.
//

#include "EngineeringCommand.h"
#include "../../RacingStrategy/StrategyTeam.h"
#include "../../Car/Tyre/TyreSupplier.h"

EngineeringCommand::EngineeringCommand() {
}

void EngineeringCommand::execute(Car *car) {
    CurrentSeason::getStrategyTeam()->decideComponents(CurrentSeason::getEngineeringTeam());
    Car * c = CurrentSeason::getEngineeringTeam()->getCar();
    CurrentSeason::getStrategyTeam()->setCar(c);
    if (successor != nullptr) {
        successor->execute(c);
    }
}
