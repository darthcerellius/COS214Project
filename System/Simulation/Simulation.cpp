//
// Created by jeanre on 2020/11/06.
//

#include <memory>
#include "Simulation.h"
#include "../Car/Engine.h"


void Simulation::Simulate(Car * car, RaceTrack * track) {

    std::cout << "Starting simulation of car , on track" << std::endl;
    std::cout <<"Number of laps : " << track->getLaps() << std::endl;
    unique_ptr<Engine> engine(dynamic_cast<Engine*>(car->getComponents()->find("engine")->second)); /** unique pointer is not needed, but makes it easier to read the code */
    std::cout << "Estimated fuel usage : " << to_string(engine->getFuelConsumption()*track->getLaps()*6); /** litres per km * num of laps * average lap length */
    if (!car->softwareTest()){
        std::cout <<"Car is expected to fail during the race" << std::endl;
    }else{
        std::cout << "Car is expected to finish the race" <<std::endl;
    }
    if (!car->windTunnelTest()){
        std::cout << "Car is expected to be slow and hard to control" <<std::endl;
    }else{
        std::cout << "Car is expected to be fast and relatively easy to control" <<std::endl;
    }

}

Simulation::Simulation() {

}
