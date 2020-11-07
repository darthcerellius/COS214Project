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
    Command* testingCommand = new TestingCommand();
    Command* simCommand = new SimulationCommand();
    Command* carStore = new CarStoreCommand();
    simCommand->addSuccessor(carStore);
    testingCommand->addSuccessor(simCommand);
    stratComm->addSuccessor(testingCommand);
    engTeam->addSuccessor(stratComm);
    return engTeam;
}
