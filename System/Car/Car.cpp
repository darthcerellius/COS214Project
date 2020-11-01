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
//commented out by Marco
/*
void Car::avoidHazard(string hazard) {
    cout<<"Car maneuvers to avoid "<<hazard<<endl;
}*/

void Car::makeTacticalDecision(string decision) {
/*
 The original Hazard hierarchy was removed by Hannes during one of the meetings in favour of the new Event hierarchy.
 Originally the Car class had 2 functions makeTacticalDecision and avoidHazard, I think Hannes intended to replace
 the avoidHazard function with the respondToEvent during the change but accidentally replaced the makeTacticalDecision
 function with repondToEvent. That is likely why the outdated avoidHazard function still appears in the class diagram.
 makeTacticalDecision is necessary for the PitCrew to communicate their tactical decisions to the car.
 */
 std::cout << "The race car receives a tactical instruction from the pit crew and executes it:\n";
 std::cout << decision << std::endl;
}

//TODO discuss implemntation
//Finished by Marco
void Car::respondToEvent(string event) {
    std::cout << "The race car is notified of an event by the pit crew and responds appropriately:\n";
    std::cout<<event<<std::endl;
}
