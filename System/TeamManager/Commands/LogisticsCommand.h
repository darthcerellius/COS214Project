//
// Created by kyle-pc on 2020/10/28.
//

#ifndef COS214PROJECT_LOGISTICSCOMMAND_H
#define COS214PROJECT_LOGISTICSCOMMAND_H

#include "../TeamManager.h"

class LogisticsCommand : public TeamManager{
public:
    LogisticsCommand();
    ~LogisticsCommand() override;
    void execute(Calendar* c) override;
};


#endif //COS214PROJECT_LOGISTICSCOMMAND_H
