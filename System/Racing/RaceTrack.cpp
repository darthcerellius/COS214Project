//
// Created by kyle-pc on 2020/11/04.
//

#include "RaceTrack.h"
 //subject in observer
 //300/length , round to nearest
 //for(0<laps) {random num for events (randbetween 5 - 80) 5 = pop tyre
 // pop tyre 5%, oil leak 10%, .....

RaceTrack::RaceTrack(Car* _car, PitCrew* _crew, RaceInfo* _info){
    car = _car;
    crew = _crew;
    info = _info;
}

void RaceTrack::numLaps(){
    double km = info->length;
    laps = round(300/km);
}

int RaceTrack::getLaps(){
    return laps;
}

void RaceTrack::race(){
    for(int i = 0; i < laps, i++){

    }
}

void notifyPitcrew(){

}
