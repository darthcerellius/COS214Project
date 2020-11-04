//
// Created by kyle-pc on 2020/10/28.
//

#include "EngineeringCommand.h"

EngineeringCommand::EngineeringCommand() {
    engTeam = new EngineeringTeam();
}

void EngineeringCommand::execute(Car *car) {
    engTeam->buildCar();
    successor->execute(engTeam->getCar());
}
