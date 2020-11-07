//
// Created by kyle-pc on 2020/11/05.
//

#ifndef COS214PROJECT_CURSEASONBUILDER_H
#define COS214PROJECT_CURSEASONBUILDER_H

#include "TeamManagerBuilder.h"

/*Builds the engineering team that constructs the car and the testers to test the components */
class Command;
class LogisticsCommand;
class RacingCommand;
class EngineeringCommand;


class CurSeasonBuilder : public TeamManagerBuilder {
public:
    CurSeasonBuilder() = default;
    ~CurSeasonBuilder() override = default;
    Command* buildCommandChain() override;
};

#endif //COS214PROJECT_CURSEASONBUILDER_H
