//
// Created by kyle-pc on 2020/11/07.
//

#include "ServiceEngineeringCommand.h"

void ServiceEngineeringCommand::execute(Car *c) {
    CurrentSeason::getEngineeringTeam()->serviceCar();
    if (successor != nullptr) {
        successor->execute(c);
    }
}
