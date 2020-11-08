//
// Created by bieldt on 2020/10/31.
//

#include "Chassis.h"
#include "../Car/Memento/Component/ComponentMemento.h"
Chassis::Chassis():Component("chassis") {
    this->windResistance=20;
    this->downForce=200;
}
Chassis::Chassis(Chassis *c): Component("chassis") {
    this->downForce=c->getDownForce();
    this->windResistance= c->getWindResistance();
}
Chassis::~Chassis() {

}


Component *Chassis::clone() {
    return dynamic_cast<Component*>(new Chassis(this));
}

void Chassis::setDownForce(double newDownForce) {
    this->downForce=newDownForce;
}

double Chassis::getDownForce() {
    return this->downForce;

}

void Chassis::setWindResistance(double newWindResistance) {
    this->windResistance=newWindResistance;
}

double Chassis::getWindResistance() {
    return this->windResistance;
}

Chassis::Chassis(double windResistance, double downForce) : Component("chassis") {
    this->windResistance= windResistance;
    this->downForce=downForce;
}

ComponentMemento *Chassis::createMemento() {
   ComponentMemento* state = new ComponentMemento();
   state->setMemento(this);
   return state;
}

void Chassis::restore(ComponentMemento * state) {
    this->downForce =dynamic_cast<ChassisAndAeroState*>(state->getMemento())->getDownForce();
    this->windResistance= dynamic_cast<ChassisAndAeroState*>(state->getMemento())->getWindResistance();
    this->setName(dynamic_cast<ChassisAndAeroState*>(state->getMemento())->getName());
}

bool Chassis::windTunnelTest() {
    std::cout << "Saving state of chassis" << std::endl;
    ComponentMemento* s = new ComponentMemento();
    s->setMemento(this);
    for (int i = 0; i < 500; ++i) {
        this->downForce -=log(i);
        this->windResistance += log(i);
        if (this->downForce<1 ){
            std::cout << "Wind tunnel test failed at test number : " + to_string(i) << ", the downforce generated was not enough"<< std::endl;
            restore(s);
            return false;
        }else if(this->windResistance>50){
            std::cout << "Wind tunnel test failed at test number : " + to_string(i) << ", the wind resistance was too high"<< std::endl;
            restore(s);
            return false;
        }
    }
    this->restore(s);
    delete s;
    std::cout << "Wind tunnel test passed, chassis restored to previous state"<< std::endl;
    return true;
}

bool Chassis::softwareTest() {
    std::cout << "No software test can be performed on a chassis" << std::endl;
    return true;;
}



