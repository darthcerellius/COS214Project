//
// Created by jeanre on 2020/11/06.
//

#include <memory>
#include "Simulation.h"
#include "../Car/Engine.h"


void Simulation::Simulate(Car * car, RaceTrack * track) {
    CarCareTaker * care = new CarCareTaker();
    care->setMemento(car->createMemento());
    std::cout << "State of car saved ... Starting simulation of car" << std::endl;
    std::cout <<"Number of laps : " << track->getLaps() << std::endl;
    Engine* engine = (dynamic_cast<Engine*>(car->getComponents().find("engine")->second)) ;
    std::cout << "Estimated fuel usage : " << to_string(engine->getFuelConsumption()*track->getLaps()*6)<< std::endl; // litres per km * num of laps * average lap length
    if (!car->softwareTest()){
        std::cout <<"Car is expected to fail during the race" << std::endl;
    }else{
        std::cout << "Car is expected to finish the race" <<std::endl;
    }
    if (!car->windTunnelTest(0)){
        std::cout << "Car is expected to be slow and hard to control" <<std::endl;
    }else{
        std::cout << "Car is expected to be fast and relatively easy to control" <<std::endl;
    }
    car->restore(care->getMemento());
    std::cout << "State of car restored after simulation" << std::endl << std::endl;
    delete care;

}

Simulation::Simulation() {

}
