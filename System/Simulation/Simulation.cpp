//
// Created by jeanre on 2020/11/06.
//

#include "Simulation.h"



void Simulation::Simulate(Car * car, RaceTrack * track) {
    state = new CarStore();
    state->setMemento(car->createMemento());

    car->restore(state->getMemento());
}

Simulation::Simulation() {

}
