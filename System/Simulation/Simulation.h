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
    CarCareTaker* state;
    Simulation();
    void Simulate(Car*,RaceTrack*);
};


#endif //COS214PROJECT_SIMULATION_H
