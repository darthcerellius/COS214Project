//
// Created by kyle-pc on 2020/11/05.
//

#include "CurSeasonBuilder.h"
#include "../Commands/LogisticsCommand.h"
#include "../Commands/RacingCommand.h"
#include "../Commands/EngineeringCommand.h"
#include "../Commands/ServiceLogisticCommand.h"
#include "../Commands/ServiceEngineeringCommand.h"

Command *CurSeasonBuilder::buildCommandChain() {
    LogisticsCommand* logisticsCommand = new LogisticsCommand();
    RacingCommand* race = new RacingCommand();
    ServiceEngineeringCommand* serviceEng = new ServiceEngineeringCommand();
    ServiceLogisticCommand* serveLog = new ServiceLogisticCommand();
    serveLog->addSuccessor(serviceEng);
    race->addSuccessor(serveLog);
    logisticsCommand->addSuccessor(race);
    return logisticsCommand;
}
