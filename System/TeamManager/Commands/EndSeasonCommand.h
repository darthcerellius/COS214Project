//
// Created by kyle-pc on 2020/11/09.
//

#ifndef COS214PROJECT_ENDSEASONCOMMAND_H
#define COS214PROJECT_ENDSEASONCOMMAND_H

#include "Command.h"

class EndSeasonCommand : public Command {
public:
    void execute(Car *car) override;

};


#endif //COS214PROJECT_ENDSEASONCOMMAND_H
