//
// Created by bieldt on 2020/10/31.
//


#include "Car.h"

Car::Car() : Component("Car"){
    generalStrategy = nullptr;
    components = map<string,Component*>();
}

Car::~Car() {
    for (auto i : components) {
        delete i.second;
    }
    if(generalStrategy)
        delete generalStrategy;
}

Component* Car::clone() {
    Car* temp = new Car();
    map<string,Component*>::iterator it;

    for(it = components.begin(); it!= components.end(); it++){
        temp->add((*it).second->clone());
    }

    if(generalStrategy)
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
    std::cout << decision << std::endl;
}

void Car::respondToEvent(string event) {
     std::cout<<event<<std::endl;
}

CarMemento *Car::createMemento() {
    CarMemento* state= new CarMemento();
    std::map<string, Component*> newComponents;
    for (auto i : components) {
        newComponents[i.first] = i.second->clone();
    }
    state->setMemento(this->carName, this->getName(),newComponents,generalStrategy->clone(),this->windResistance,this->downForce);
    return state;

}

map<string, Component *> Car::getComponents() {
    return components;
}

GeneralRaceStrategy *Car::getStrategy() {
    return this->generalStrategy;
}

void Car::restore(CarMemento * state) {
    this->carName=state->getMemento()->getCarName();
    for (auto i : components) {
        delete i.second;
    }
    this->components.clear();
    for (auto i : state->getMemento()->getComponents()) {
        this->components[i.first] = i.second->clone();
    }
    delete generalStrategy;
    this->generalStrategy = state->getMemento()->getStrategy()->clone();
    this->downForce = state->getMemento()->getDownForce();
    this->windResistance= state->getMemento()->getWindResistance();
}

bool Car::softwareTest() {
    std::cout <<"Starting software test on car : "<< carName << std::endl;
    int failedCount =0;
    if (components.begin()->second== nullptr){
        std::cout << "There are no components in the car, software test passed" << std::endl;
        return true;
    }
    for (auto it : components) {
        if (!it.second->softwareTest()){
            failedCount++;
        }

    }
    if (failedCount> 1){
        std::cout << "Car wind tunnel test failed, a component failed the test, number of failed components : " << to_string(failedCount) << std::endl;
        return false;
    }
    std::cout << "Car wind tunnel test passed, no components failed" << std::endl;
    return true;
}

bool Car::windTunnelTest() {
    std::cout <<"Starting wind tunnel test on car : " << carName << std::endl;
    int failedCount =0;
    for (auto it : components) {
        if (!it.second->windTunnelTest()){
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

void Car::printComponents() {
    std::cout << "Components in car : " << std::endl;
    for (auto it : components) {
        std::cout << it.second->getName()<< std::endl;
    }

}



