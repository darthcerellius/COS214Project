//
// Created by bieldt on 2020/10/31.
//

#include "Car.h"

Car::Car() : Component("Car"){
    generalStrategy = 0;
}

Car::~Car() {
    components.clear();
    //QUESTION: Who is responsible for the deletion of race strategy
    //Answered by Marco: Car should delete race strategy if one has been assigned to it.
    //When assigning a new strategy, previous one should also be deleted
    if(generalStrategy)
        delete generalStrategy;
}

Component* Car::clone() {
    Car* temp = new Car();
    map<string,Component*>::iterator it;

    for(it = components.begin(); it!= components.end(); it++){
        temp->add((*it).second->clone());
    }
    //TODO Add copy constructor or clone for general race strategy
    //Finished by Marco
    temp->setRaceStrategy(generalStrategy->clone());

    return temp;
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
//TODO discuss implementation
void Car::avoidHazard(string hazard) {
    cout<<"Car maneuvers to avoid "<<hazard<<endl;
}
//TODO discuss implemntation
void Car::respondToEvent(string event) {
    cout<<event<<endl;
}
