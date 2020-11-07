//
// Created by kyle-pc on 2020/10/28.
//

#ifndef COS214PROJECT_LOGISTICSCOMMAND_H
#define COS214PROJECT_LOGISTICSCOMMAND_H

#include "../TeamManager.h"
#include "../../TransportMethod/AirTransport.h"

class LogisticsCommand : public Command {
private:
    AirTransport* transport;
public:
    LogisticsCommand();
    ~LogisticsCommand() override;
    void execute(Car* c) override;
};


#endif //COS214PROJECT_LOGISTICSCOMMAND_H
