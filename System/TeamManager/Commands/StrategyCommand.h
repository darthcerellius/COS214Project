//
// Created by kyle-pc on 2020/10/28.
//

#ifndef COS214PROJECT_STRATEGYCOMMAND_H
#define COS214PROJECT_STRATEGYCOMMAND_H

#include "Command.h"

class StrategyTeam;

/**
 * @brief Uses the strategy team to decide on the car's strategy.
 */
class StrategyCommand : public Command {
public:
    StrategyCommand() = default;
    void execute(Car* car) override;

};


#endif //COS214PROJECT_STRATEGYCOMMAND_H
