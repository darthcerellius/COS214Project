//
// Created by kyle-pc on 2020/11/04.
//

#include "RaceTrack.h"

RaceTrack::RaceTrack(PitCrew* _crew, RaceInfo* _info){
    crew = _crew;
    info = _info;
    event = new NoEvent();
}

void RaceTrack::numLaps(){
    double km = info->length;
    laps = round(300/km);
}

int RaceTrack::getLaps(){
    return laps;
}

void RaceTrack::race(){
    bool brokenComponent;
    bool redFlag;
    bool safetyCar;
    bool wornTyres;
    bool yellowFlag;
    int chance = 0;
    for(int i = 0; i < laps; i++){
        bool brokenComponent = (rand() % 100) < 10;
        bool redFlag = (rand() % 100) < (5 + chance);
        bool safetyCar = (rand() % 100) < (5 + chance);
        bool wornTyres = (rand() % 100) < (5 + chance);
        bool yellowFlag = (rand() % 100) < (5 + chance);

        if(brokenComponent){
            delete event;
            event = new BrokenComponent();
            event->eventDescription();
            event->changeEvent(crew);
            chance++;
            continue;
        }
        else if(wornTyres){
            delete event;
            event = new WornTyres();
            event->eventDescription();
            event->changeEvent(crew);
            chance++;
            continue;
        }
        else if(redFlag){
            delete event;
            event = new RedFlag();
            event->eventDescription();
            event->changeEvent(crew);
            chance++;
            continue;
        }
        else if(safetyCar){
            delete event;
            event = new SafetyCar();
            event->eventDescription();
            event->changeEvent(crew);
            chance++;
            continue;
        }
        else if(yellowFlag){
            delete event;
            event = new YellowFlag();
            event->eventDescription();
            event->changeEvent(crew);
            chance++;
            continue;
        }
        else{
            event->eventDescription();
            chance++;
            continue;
        }
    }
}
