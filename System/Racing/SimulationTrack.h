//
// Created by kyle-pc on 2020/11/07.
//

#ifndef COS214PROJECT_SIMULATIONTRACK_H
#define COS214PROJECT_SIMULATIONTRACK_H

#include "RaceTrack.h"

/**
 * @brief Implements the RaceTrack class for the Simulation class.
 */
class SimulationTrack : public RaceTrack {
public:
    SimulationTrack() = default;
    ~SimulationTrack() override = default;
    int getLaps() override;
};


#endif //COS214PROJECT_SIMULATIONTRACK_H
