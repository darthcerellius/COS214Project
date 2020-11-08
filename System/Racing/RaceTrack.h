//
// Created by kyle-pc on 2020/11/04.
//

#ifndef COS214PROJECT_RACETRACK_H
#define COS214PROJECT_RACETRACK_H

/**
 * @brief Virtual parent class for SimulationTrack and RealRaceTrack
 *
 * This class exists for the Simulation class, as it calls a RaceTrack class.
 */
class RaceTrack {
public:
    RaceTrack() = default;
    virtual ~RaceTrack() = default;
    /**
     * Returns the number of laps the race track has.
     * @return - Number of race laps.
     */
    virtual int getLaps() = 0;
};


#endif //COS214PROJECT_RACETRACK_H
