//
// Created by bieldt on 2020/10/31.
//

#include "Car.h"

Car::Car() : Component("Car"){
    generalStrategy = 0;
}

Car::~Car() {
    components->clear();
    if(generalStrategy)
        delete generalStrategy;
}

Component* Car::clone() {
    Car* temp = new Car();
    map<string,Component*>::iterator it;

    for(it = components->begin(); it!= components->end(); it++){
        temp->add((*it).second->clone());
    }

    temp->setRaceStrategy(generalStrategy->clone());
    return temp;

}

void Car::add(Component *c) {
    components->insert(pair<string, Component*>(c->getName(),c));

}

void Car::remove(string c) {
    map<string, Component *>::iterator it = components->find(c);
    if (it != components->end())
        components->erase(it);
}



void Car::setRaceStrategy(GeneralRaceStrategy *rs) {
    if(generalStrategy)
        delete generalStrategy;
    this->generalStrategy = rs;
}

void Car::executeStrategy() {
    if(generalStrategy)
        generalStrategy->executeStrategy();
    else
        std::cout << "DEBUG: The race car has not yet been assigned a general race strategy.\n";
}

void Car::makeTacticalDecision(string decision) {
 std::cout << "TACTICS: The race car receives a tactical instruction from the pit crew and executes it:\n";
 std::cout << decision << std::endl;
}

void Car::respondToEvent(string event) {
    std::cout << "EVENT: The race car is notified of an event by the pit crew and responds appropriately:\n";
    std::cout<<event<<std::endl;
}

CarCareTaker *Car::createMemento() {
    CarCareTaker* state= new CarCareTaker();
    state->setMemento(this->carName, this->getName(),dynamic_cast<Car*>(clone())->getComponents(),dynamic_cast<Car*>(clone())->getStrategy(),this->windResistance,this->downForce);
    return state;

}

map<string, Component *> *Car::getComponents() {
    return components;
}

GeneralRaceStrategy *Car::getStrategy() {
    return this->generalStrategy;
}

void Car::restore(CarCareTaker * state) {
    this->carName=state->getMemento()->getCarName();
    this->components=state->getMemento()->getComponents();
    this->generalStrategy = state->getMemento()->getStrategy();
    this->downForce = state->getMemento()->getDownForce();
    this->windResistance= state->getMemento()->getWindResistance();
}

bool Car::softwareTest() {
    std::cout <<"Starting software test on car" << std::endl;
}

bool Car::windTunnelTest() {
    std::cout <<"Starting wind tunnel test on car" << std::endl;
    int failedCount =0;
    for (auto it : *components) {
        if (it.second->windTunnelTest()){
            failedCount++;
        }

    }
    if (failedCount> 1){
        std::cout << "Car wind tunnel test failed, a component failed the test" << std::endl;
        return false;
    }
    std::cout << "Car wind tunnel test passed, no components failed" << std::endl;
    return true;

}



