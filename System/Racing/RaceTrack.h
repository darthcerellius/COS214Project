//
// Created by kyle-pc on 2020/11/04.
//

#ifndef COS214PROJECT_RACETRACK_H
#define COS214PROJECT_RACETRACK_H
#include <cmath>
#include "../Car/Car.h"
#include "../RacingStrategy/PitCrew/PitCrew.h"
#include "../Calendar/RaceWeekend.h"

class TeamManager;

class RaceTrack {
public:
    RaceTrack(Car* _car, PitCrew* _crew, RaceInfo* _info);
    void numLaps();
    int getLaps();
    void race();
    void notifyPitcrew();
private:
    Car* car;
    PitCrew* crew;
    RaceInfo* info;
    int laps;
};


#endif //COS214PROJECT_RACETRACK_H
