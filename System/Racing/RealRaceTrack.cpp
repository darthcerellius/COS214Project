//
// Created by kyle-pc on 2020/11/07.
//

#include "RealRaceTrack.h"
#include <ctime>
#include "Observers/Observer.h"
#include <ctime>

RealRaceTrack::RealRaceTrack(Observer* observer, PitCrew* _crew, RaceWeekend* _info){
    crew = _crew;
    info = _info;
    positionRecorder = observer;
    event = new NoEvent();
    srand(time(NULL));
}

void RealRaceTrack::numLaps(){
    double km = info->getLength();
    laps = round(300/km);
}

int RealRaceTrack::getLaps(){
    return laps;
}

void RealRaceTrack::race(){
    std::cout << "The day is: Sunday, " << info->getDate()->d + 2 << "-" << info->getDate()->m << "-" <<info->getDate()->y << std::endl;
    bool brokenComponent;
    bool redFlag;
    bool safetyCar;
    bool wornTyres;
    bool yellowFlag;
    bool changeDecision;
    int chance = 0;
    std::cout << "Car is prepping for race..." << std::endl;
    std::cout << "GO!" << std::endl;
    for(int i = 0; i < laps; i++){
        brokenComponent = (rand() % 100) < (5 + chance);
        redFlag = (rand() % 100) < (5 + chance);
        safetyCar = (rand() % 100) < (5 + chance);
        wornTyres = (rand() % 100) < (5 + chance);
        yellowFlag = (rand() % 100) < (5 + chance);
        changeDecision = (rand() % 100) < (10 + chance);

        if(brokenComponent){
            delete event;
            event = new BrokenComponent();
            event->changeEvent(crew);
            chance++;
            continue;
        }
        else if(wornTyres){
            delete event;
            event = new WornTyres();
            event->changeEvent(crew);
            chance++;
            continue;
        }
        else if(redFlag){
            delete event;
            event = new RedFlag();
            event->changeEvent(crew);
            chance++;
            continue;
        }
        else if(safetyCar){
            delete event;
            event = new SafetyCar();
            event->changeEvent(crew);
            chance++;
            continue;
        }
        else if(yellowFlag){
            delete event;
            event = new YellowFlag();
            event->changeEvent(crew);
            chance++;
            continue;
        } else if (changeDecision) {
            crew->makeTacticalInstruction(rand() % 4);
        }
        else{
            event->eventDescription();
            chance++;
        }
    }
    std::cout << "The car has finished the final lap..." << std::endl;
    position = (rand() % 10) + 1;
    positionRecorder->notify();
}

void RealRaceTrack::practice() {
    std::cout << "The day is: Friday, " << info->getDate()->d << "-" << info->getDate()->m << "-" <<info->getDate()->y << std::endl;
    std::cout << "The driver is practicing on the race track!" << std::endl;
}

void RealRaceTrack::qualify() {
    std::cout << "The day is: Saturday, " << info->getDate()->d + 1 << "-" << info->getDate()->m << "-" <<info->getDate()->y << std::endl;
    std::cout << "The Car is busy with the qualifier round..." << std::endl;
    position = (rand() % 10) + 1;
    positionRecorder->notify();
    std::cout << "The qualifying round has finished." << std::endl;
}

int RealRaceTrack::getPosition() {
    return position;
}
