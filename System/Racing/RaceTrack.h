//
// Created by kyle-pc on 2020/11/04.
//

#ifndef COS214PROJECT_RACETRACK_H
#define COS214PROJECT_RACETRACK_H
#include <cmath>
#include "../RacingStrategy/PitCrew/RaceEvents/BrokenComponent.h"
#include "../RacingStrategy/PitCrew/RaceEvents/NoEvent.h"
#include "../RacingStrategy/PitCrew/RaceEvents/RedFlag.h"
#include "../RacingStrategy/PitCrew/RaceEvents/SafetyCar.h"
#include "../RacingStrategy/PitCrew/RaceEvents/WornTyres.h"
#include "../RacingStrategy/PitCrew/RaceEvents/YellowFlag.h"
#include "../RacingStrategy/PitCrew/PitCrew.h"
#include "../Calendar/RaceWeekend.h"

class TeamManager;

class RaceTrack {
public:
    RaceTrack(PitCrew* _crew, RaceInfo* _info);
    void numLaps();
    int getLaps();
    void race();
private:
    PitCrew* crew;
    RaceInfo* info;
    int laps;
    RaceEvent* event;
};


#endif //COS214PROJECT_RACETRACK_H
