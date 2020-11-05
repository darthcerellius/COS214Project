//
// Created by bieldt on 2020/10/31.
//

#include "Car.h"

Car::Car() : Component("Car"){
    generalStrategy = 0;
}

Car::~Car() {
    components.clear();
    if(generalStrategy)
        delete generalStrategy;
}

Component* Car::clone() {
    Car* temp = new Car();
    map<string,Component*>::iterator it;

    for(it = components.begin(); it!= components.end(); it++){
        temp->add((*it).second->clone());
    }

    temp->setRaceStrategy(generalStrategy->clone());
    return temp;

}

void Car::add(Component *c) {
    components.insert(pair<string, Component*>(c->getName(),c));

}

void Car::remove(string c) {
    map<string, Component *>::iterator it = components.find(c);
    if (it != components.end())
        components.erase(it);
}


//TODO discuss how this should be implemented in individual components
bool Car::test() {

    bool result = true;
    map<string, Component*>::iterator it;
    for(it = components.begin(); it != components.end();it++){
        if(!(*it).second->test()){
            result = false;
        }
    }
    return result;
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


