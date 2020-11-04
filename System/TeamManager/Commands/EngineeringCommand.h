//
// Created by kyle-pc on 2020/10/28.
//

#ifndef COS214PROJECT_ENGINEERINGCOMMAND_H
#define COS214PROJECT_ENGINEERINGCOMMAND_H

#include "../../Engineering/EngineeringTeam.h"
#include "Command.h"

class EngineeringCommand : public Command {
private:
    EngineeringTeam* engTeam;
public:
    EngineeringCommand();
    void execute(Car *car) override;
};


#endif //COS214PROJECT_ENGINEERINGCOMMAND_H
