//
// Created by kyle-pc on 2020/11/07.
//

#ifndef COS214PROJECT_CARSTORECOMMAND_H
#define COS214PROJECT_CARSTORECOMMAND_H

#include "Command.h"

class CarStoreCommand : public Command {
public:
    CarStoreCommand() = default;
    ~CarStoreCommand() override = default;
    void execute(Car *c) override;
};


#endif //COS214PROJECT_CARSTORECOMMAND_H
