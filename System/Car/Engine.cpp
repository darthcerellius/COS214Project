//
// Created by bieldt on 2020/10/31.
//

#include "Engine.h"
#include "../Memento/Component/ComponentCareTaker.h"
Engine::Engine() : Component("engine"){
    this->HP = 0;
    this->fuelConsumption =0;
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

void Engine::restore(ComponentCareTaker * state) {
    this->fuelConsumption= dynamic_cast<EngineState*>(state->getMemento())->getFuelConsumption();
    this->HP = dynamic_cast<EngineState*>(state->getMemento())->getHorsePower();
    this->setName(dynamic_cast<EngineState*>(state->getMemento())->getName());

}

ComponentCareTaker *Engine::createMemento() {
    auto* x = new ComponentCareTaker();
    x->setMemento(this);
    return x;
}

bool Engine::softwareTest() {
    std::cout << "Starting software test on engine" << std::endl;
    if (fuelConsumption>10){
        std::cout << "Software test failed, engine fuel consumption too high" << std::endl;
        return false;
    }
    if (HP < 500){
        std::cout << "Software test failed, engine does not have enough horsepower to be competitive" << std::endl;
        return false;
    }
    std::cout << "Software test completed, engine passed software test" << std::endl;
    return true;
}

bool Engine::windTunnelTest() {
    std::cout << this->getName() << " not suitable to test in the wind tunnel" << std::endl;
    return true;
}
