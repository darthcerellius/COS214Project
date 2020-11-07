//
// Created by kyle-pc on 2020/11/06.
//

#include "SimulationCommand.h"
#include "../../Racing/SimulationTrack.h"

SimulationCommand::SimulationCommand(){
    simulation = new Simulation();
}

void SimulationCommand::execute(Car *car) {
    SimulationTrack* track = new SimulationTrack();
    simulation->Simulate(car, track);

}