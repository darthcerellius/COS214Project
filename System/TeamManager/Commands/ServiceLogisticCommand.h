//
// Created by kyle-pc on 2020/11/07.
//

#ifndef COS214PROJECT_SERVICELOGISTICCOMMAND_H
#define COS214PROJECT_SERVICELOGISTICCOMMAND_H

#include "Command.h"

/**
 * @brief Transports the car to the Service Engineering team.
 */
class ServiceLogisticCommand : public Command {
public:
    ServiceLogisticCommand() = default;
    ~ServiceLogisticCommand() override = default;
    void execute(Car* c) override;
};


#endif //COS214PROJECT_SERVICELOGISTICCOMMAND_H
