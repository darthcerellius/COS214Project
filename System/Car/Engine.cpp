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
