//
// Created by bieldt on 2020/10/31.
//

#include "AerodynamicsComponent.h"
#include "../Memento/Component/ComponentCareTaker.h"
AerodynamicsComponent::AerodynamicsComponent() : Component("aerodynamic") {
    this->windResistance=0;
    this->downForce=0;
}

AerodynamicsComponent::AerodynamicsComponent(AerodynamicsComponent *a):Component(a->getName()){
    this->downForce=a->getDownForce();
    this->windResistance=a->getWindResistance();
}

AerodynamicsComponent::~AerodynamicsComponent() {

}



Component* AerodynamicsComponent::clone() {
    return dynamic_cast<Component*>(new AerodynamicsComponent(this));
}

double AerodynamicsComponent::getDownForce() {
    return this->downForce;
}

double AerodynamicsComponent::getWindResistance() {
    return this->windResistance;
}

void AerodynamicsComponent::setWindResistance(double newWindResistance) {
    this->windResistance = newWindResistance;
}

void AerodynamicsComponent::setDownForce(double newDownForce) {
    this->downForce = newDownForce;
}

AerodynamicsComponent::AerodynamicsComponent(double downForce, double windResistance) :Component("aerodynamic"){
    this->downForce= downForce;
    this->windResistance= windResistance;
}



ComponentCareTaker *AerodynamicsComponent::createMemento() {
    ComponentCareTaker* state=new ComponentCareTaker();
    state->setMemento(this);
    return state;

}

void AerodynamicsComponent::restore(ComponentCareTaker * state) {
    this->windResistance= dynamic_cast<ChassisAndAeroState*>(state->getMemento())->getWindResistance();
    this->downForce=dynamic_cast<ChassisAndAeroState*>(state->getMemento())->getDownForce();
    this->setName(dynamic_cast<ChassisAndAeroState*>(state->getMemento())->getName());

}


