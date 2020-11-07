//
// Created by kyle-pc on 2020/11/07.
//

#include "CarStoreCommand.h"

void CarStoreCommand::execute(Car *c) {
    CurrentSeason::raceCar = c;
    if (successor != nullptr) {
        successor->execute(c);
    }
}
