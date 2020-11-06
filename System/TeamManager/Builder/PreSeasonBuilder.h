//
// Created by kyle-pc on 2020/11/05.
//

#ifndef COS214PROJECT_PRESEASONBUILDER_H
#define COS214PROJECT_PRESEASONBUILDER_H

#include "TeamManagerBuilder.h"

/*Builds the engineering team that constructs the car and the testers to test the components */
class EngineeringTeam;
class Simulation;
class Testing;
class Command;
class SimulationCommand;
class TestingCommand;

class PreSeasonBuilder : public TeamManagerBuilder {
public:
    PreSeasonBuilder() = default;
    ~PreSeasonBuilder() override = default;
    Command* buildCommandChain() override;
};


#endif //COS214PROJECT_PRESEASONBUILDER_H
