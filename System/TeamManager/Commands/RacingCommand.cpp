//
// Created by kyle-pc on 2020/10/28.
//

#include "RacingCommand.h"
#include "../../RacingStrategy/PitCrew/PitCrew.h"

RacingCommand::RacingCommand() {
    crew = new PitCrew();
    track = new RaceTrack(crew, CurrentSeason::currentWeekend);
    track->numLaps();
}

RacingCommand::~RacingCommand() {
    delete track;
    delete crew;
}

void RacingCommand::execute(Car *car) {
    std::cout << "Current race is happening at: " <<
    CurrentSeason::currentWeekend->getName() << ", "
    << CurrentSeason::currentWeekend->getLocation() << std::endl;
    std::cout << std::endl;
    std::cout << "Number of laps: " << track->getLaps() << std::endl;

    crew->setCar(car);
    TyreSupplier supplier;
    std::cout << "Ordering tyres..." << std::endl;
    crew->orderTyres(&supplier);
    std::cout << "Starting race!" << std::endl;
    track->race();
    std::cout << "Race is over"
    successor->execute(car);
}
