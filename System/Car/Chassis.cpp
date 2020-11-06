//
// Created by bieldt on 2020/10/31.
//

#include "Chassis.h"
#include "../Memento/Component/ComponentCareTaker.h"
Chassis::Chassis():Component("chassis") {
    this->windResistance=0;
    this->downForce=0;
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

ComponentCareTaker *Chassis::createMemento() {
   ComponentCareTaker* state = new ComponentCareTaker();
   state->setMemento(this);
   return state;
}

void Chassis::restore(ComponentCareTaker * state) {
    this->downForce =dynamic_cast<ChassisAndAeroState*>(state->getMemento())->getDownForce();
    this->windResistance= dynamic_cast<ChassisAndAeroState*>(state->getMemento())->getWindResistance();
    this->setName(dynamic_cast<ChassisAndAeroState*>(state->getMemento())->getName());
}



