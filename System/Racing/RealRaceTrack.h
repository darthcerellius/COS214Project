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

/**
 * @brief Simulates a race event for the system.
 *
 * This class has three functions: qualify, practice and race. Practice is meant for the Friday practice day,
 * qualify is meant to determine the qualifying position of the car, and race performs the actual race. Race
 * also generates random events for the PitCrew to handle.
 */
class RealRaceTrack : public RaceTrack {
public:
    RealRaceTrack(Observer* observer, PitCrew* _crew);
    /**
     * Calculates how many laps this race track has
     */
    void numLaps();
    /**
     * Gets a Weekend class to determine race track information
     * @param weekend - The weekend where thre race is happening
     */
    void setWeekend(RaceWeekend* weekend);
    int getLaps() override;

    /**
     * Gets the positon of the car
     * @return - The car's position
     */
    int getPosition();
    /**
     * Performs the real race
     */
    void race();
    /**
     * Runs the practice day.
     */
    void practice();
    /**
     * Runs the qualifying round.
     */
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
