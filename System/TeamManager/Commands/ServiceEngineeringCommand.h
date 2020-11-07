//
// Created by kyle-pc on 2020/11/07.
//

#ifndef COS214PROJECT_SERVICEENGINEERINGCOMMAND_H
#define COS214PROJECT_SERVICEENGINEERINGCOMMAND_H

#include "Command.h"
#include "../../Engineering/EngineeringTeam.h"

class ServiceEngineeringCommand : public Command {
public:
    ServiceEngineeringCommand() = default;
    ~ServiceEngineeringCommand() override = default;
    void execute(Car* c) override;
};


#endif //COS214PROJECT_SERVICEENGINEERINGCOMMAND_H
