//
// Created by kyle-pc on 2020/11/07.
//

#ifndef COS214PROJECT_REALRACETRACK_H
#define COS214PROJECT_REALRACETRACK_H

#include <cmath>
#include "../RacingStrategy/PitCrew/RaceEvents/BrokenComponent.h"
#include "../RacingStrategy/PitCrew/RaceEvents/NoEvent.h"
#include "../RacingStrategy/PitCrew/RaceEvents/RedFlag.h"
#include "../RacingStrategy/PitCrew/RaceEvents/SafetyCar.h"
#include "../RacingStrategy/PitCrew/RaceEvents/WornTyres.h"
#include "../RacingStrategy/PitCrew/RaceEvents/YellowFlag.h"
#include "../RacingStrategy/PitCrew/PitCrew.h"
#include "../Calendar/RaceWeekend.h"
#include "RaceTrack.h"

class TeamManager;
class Observer;

class RealRaceTrack : public RaceTrack {
public:
    RealRaceTrack(Observer* observer, PitCrew* _crew);
    void numLaps();
    void setWeekend(RaceWeekend* weekend);
    int getLaps() override;
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

#endif //COS214PROJECT_REALRACETRACK_H
