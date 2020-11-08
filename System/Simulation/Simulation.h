//
// Created by jeanre on 2020/11/06.
//

#ifndef COS214PROJECT_SIMULATION_H
#define COS214PROJECT_SIMULATION_H

#include "../Car/Car.h"
#include "../Racing/RaceTrack.h"
#include "../Car/Memento/Car/CarCareTaker.h"
class Simulation {
public:
    /**
     * saves a car state
     */
    CarCareTaker* state;
    Simulation();
    /**
     * Used to output expected fuel usage
     * @param car a car object who will be used to simulate
     * @param track a track object who will be used in the simulate function
     */
    void Simulate(Car* car,RaceTrack* track);
};


#endif //COS214PROJECT_SIMULATION_H
