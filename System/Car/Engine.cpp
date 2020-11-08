//
// Created by bieldt on 2020/10/31.
//

#include <memory>
#include "Engine.h"
#include "../Car/Memento/Component/ComponentMemento.h"
Engine::Engine() : Component("engine"){
    this->HP = 1000;
    this->fuelConsumption =7;
}

Engine::Engine(Engine *c) :Component("engine"){
    this->HP = c->getHP();
    this->fuelConsumption= c->getFuelConsumption();
}

Engine::~Engine() {

}


Component *Engine::clone() {
    return dynamic_cast<Component*>(new Engine(this));
}

int Engine::getHP() {
    return this->HP;
}
void Engine::setHP(int newHP) {
    this->HP = newHP;
}

Engine::Engine(int fuelConsumption, int horsepower):Component("engine"){
    this->HP = horsepower;
    this->fuelConsumption=fuelConsumption;
}

int Engine::getFuelConsumption() {
    return this->fuelConsumption;
}

void Engine::setFuelConsumption(int newFuelConsumption) {
    this->fuelConsumption= newFuelConsumption;
}

void Engine::restore(ComponentMemento * state) {
    this->fuelConsumption= dynamic_cast<EngineState*>(state->getMemento())->getFuelConsumption();
    this->HP = dynamic_cast<EngineState*>(state->getMemento())->getHorsePower();
    this->setName(dynamic_cast<EngineState*>(state->getMemento())->getName());

}

ComponentMemento *Engine::createMemento() {
    auto* x = new ComponentMemento();
    x->setMemento(this);
    return x;
}

bool Engine::softwareTest() {
    std::cout << "Starting software test on engine" << std::endl;
    if (fuelConsumption>10){
        std::cout << "Software test failed, engine fuel consumption too high, more than 10 litres per km " << std::endl<< std::endl;
        return false;
    }
    if (HP < 500){
        std::cout << "Software test failed, engine does not have enough horsepower to be competitive, the horsepower was less than 500" << std::endl<< std::endl;
        return false;
    }
    std::cout << "Software test completed, engine passed software test" << std::endl<< std::endl;
    return true;
}

bool Engine::windTunnelTest() {
    std::cout << "Engine not suitable to test in the wind tunnel, as it will be contained within the chassis" << std::endl<< std::endl;
    return true;
}
