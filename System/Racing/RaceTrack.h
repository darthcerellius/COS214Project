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
class Observer;

class RaceTrack {
public:
    RaceTrack(Observer* observer, PitCrew* _crew, RaceWeekend* _info);
    void numLaps();
    int getLaps();
    int getPosition();
    void race();
    void practice();
    void qualify();
private:
    PitCrew* crew;
    RaceWeekend* info;
    int laps;
    int position;
    RaceEvent* event;
    Observer* positionRecorder;
};


#endif //COS214PROJECT_RACETRACK_H
