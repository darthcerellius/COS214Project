//
// Created by bieldt on 2020/10/31.
//

#include "Engine.h"

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
//TODO implementation
bool Engine::test() {
    int testResult = rand()%10;
    if(testResult == 0){
        return false;//test failed
    }else{
        return true;
    }
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

void Engine::restore(ComponentCareTaker *) {
    ComponentCareTaker* x = new ComponentCareTaker();

}

ComponentCareTaker *Engine::createMemento() {
    return nullptr;
}
