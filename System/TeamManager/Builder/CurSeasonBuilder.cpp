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

Command *CurSeasonBuilder::buildCommandChain() {
    LogisticsCommand* logisticsCommand = new LogisticsCommand();
    RacingCommand* race = new RacingCommand();
    Command* testingCommand = new TestingCommand();
    ServiceEngineeringCommand* serviceEng = new ServiceEngineeringCommand();
    ServiceLogisticCommand* serveLog = new ServiceLogisticCommand();
    serveLog->addSuccessor(serviceEng);
    race->addSuccessor(serveLog);
    testingCommand->addSuccessor(race);
    logisticsCommand->addSuccessor(testingCommand);
    return logisticsCommand;
}
