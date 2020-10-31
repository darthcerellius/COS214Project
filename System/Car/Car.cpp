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
    //TODO Add copy constructor or clone for general race strategy
    //temp->setRaceStrategy(new GeneralRaceStrategy(generalStrategy));

}

void Car::add(Component *c) {
    components.insert(pair<string, Component*>(c->getName(),c));
}

void Car::remove(string c) {
    map<string,Component*>::iterator it = components.find(c);
    if(it != components.end())
        components.erase(it);
}
//TODO discuss how this should be implemented
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
    this->generalStrategy = rs;
}

void Car::executeStrategy() {
    generalStrategy->executeStrategy();
}
//TODO discuss implementation
void Car::avoidHazard(string hazard) {
    cout<<"Car maneuvers to avoid "<<hazard<<endl;
}
//TODO discuss implemntation
void Car::respondToEvent(string event) {
    cout<<event<<endl;
}
