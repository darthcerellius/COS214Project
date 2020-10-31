//
// Created by bieldt on 2020/10/31.
//

#include "Car.h"

Car::Car() {
    generalStrategy = 0;
}

Car::~Car() {
    components.clear();
    //Who is responsible for the deletion of race strategy
    delete generalStrategy;
}

Component* Car::clone() {
    Car* temp = new Car();
    map<string,Component*>::iterator it;

    for(it = components.begin(); it!= components.end(); it++){
        temp->add((*it).second->clone());
    }

    //Add copy constructor or clone for general race strategy
    //temp->setRaceStrategy(new GeneralRaceStrategy(generalStrategy));

}

void Car::add(Component *c) {
    map<string,Component*>::iterator it = components.begin();
    components.insert(begin,pair<string, Component*>(c->getName(),));
}

void Car::remove(string c) {

}

bool Car::test() {
    return false;
}

void Car::setRaceStrategy(GeneralRaceStrategy *rs) {

}

void Car::executeStrategy() {

}

void Car::avoidHazard(string hazard) {

}

void Car::respondToEvent(string event) {

}
