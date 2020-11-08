//
// Created by kyle-pc on 2020/11/05.
//

#include "PreSeasonBuilder.h"
#include "../Commands/TestingCommand.h"
#include "../Commands/SimulationCommand.h"
#include "../Commands/StrategyCommand.h"
#include "../Commands/CarStoreCommand.h"
#include "../Commands/EngineeringCommand.h"

Command *PreSeasonBuilder::buildCommandChain() {
    Command* stratComm = new StrategyCommand();
    Command* engTeam = new EngineeringCommand();
    Command* simCommand = new SimulationCommand();
    Command* carStore = new CarStoreCommand();
    simCommand->addSuccessor(carStore);
    stratComm->addSuccessor(simCommand);
    engTeam->addSuccessor(stratComm);
    return engTeam;
}
