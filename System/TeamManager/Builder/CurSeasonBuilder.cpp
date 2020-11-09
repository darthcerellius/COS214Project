//
// Created by kyle-pc on 2020/11/05.
//

#include "CurSeasonBuilder.h"
#include "../Commands/LogisticsCommand.h"
#include "../Commands/RacingCommand.h"
#include "../Commands/EngineeringCommand.h"
#include "../Commands/ServiceLogisticCommand.h"
#include "../Commands/ServiceEngineeringCommand.h"
#include "../Commands/TestingCommand.h"
#include "../Commands/EndSeasonCommand.h"
#include "../Commands/StrategyCommand.h"

Command *CurSeasonBuilder::buildCommandChain() {
    LogisticsCommand* logisticsCommand = new LogisticsCommand();
    Command* stratComm = new StrategyCommand();
    RacingCommand* race = new RacingCommand();
    Command* testingCommand = new TestingCommand();
    Command* endSeasonCommand = new EndSeasonCommand();
    ServiceEngineeringCommand* serviceEng = new ServiceEngineeringCommand();
    ServiceLogisticCommand* serveLog = new ServiceLogisticCommand();
    logisticsCommand->addSuccessor(testingCommand);
    testingCommand->addSuccessor(stratComm);
    stratComm->addSuccessor(race);
    race->addSuccessor(endSeasonCommand);
    endSeasonCommand->addSuccessor(serveLog);
    serveLog->addSuccessor(serviceEng);
    return logisticsCommand;
}
