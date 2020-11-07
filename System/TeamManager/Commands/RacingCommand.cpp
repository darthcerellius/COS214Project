//
// Created by kyle-pc on 2020/10/28.
//

#include "RacingCommand.h"
#include "../../RacingStrategy/PitCrew/PitCrew.h"

RacingCommand::RacingCommand() {
    crew = new PitCrew();
    posRecorder = new Observer();
    track = new RaceTrack(posRecorder, crew, CurrentSeason::currentWeekend);
    posRecorder->attach(track);
    track->numLaps();
}

RacingCommand::~RacingCommand() {
    delete track;
    delete crew;
    delete posRecorder;
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

    std::cout << "Starting practice day." << std::endl;
    track->practice();

    std::cout << "Starting qualifying round." << std::endl;
    track->qualify();
    std::cout << "The car qualifies for position " << posRecorder->getEvent() << std::endl;

    std::cout << "Starting race!" << std::endl;
    track->race();
    std::cout << "Race is over" << std::endl;
    std::cout << "The car came in position: " << posRecorder->getEvent() << std::endl;
    int points;
    switch (posRecorder->getEvent()) {
        case 1:
            points = 25;
            break;
        case 2:
            points = 18;
            break;
        case 3:
            points = 15;
            break;
        case 4:
            points = 12;
            break;
        case 5:
            points = 10;
            break;
        case 6:
            points = 8;
            break;
        case 7:
            points = 6;
            break;
        case 8:
            points = 4;
            break;
        case 9:
            points = 2;
            break;
        default:
            points = 1;
    }
    std::cout << "The car received " << points << " points";
    successor->execute(car);
}
