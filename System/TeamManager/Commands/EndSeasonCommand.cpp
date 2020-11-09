//
// Created by kyle-pc on 2020/11/09.
//

#include "EndSeasonCommand.h"
#include "../../Engineering/EngineeringTeam.h"
#include "../TeamManagerObjects.h"

void EndSeasonCommand::execute(Car *car) {
    if (CurrentSeason::curSeason >= CurrentSeason::endSeason) {
        std::cout << "The season is over and the tests for the next car have been completed. Sending car to the next "
                  << "season's Engineering department" << std::endl;
        CurrentSeason::getEngineeringTeam()->setCar(CurrentSeason::testingCar);
    }
    else if (successor != nullptr) {
        successor->execute(car);
    }
}
