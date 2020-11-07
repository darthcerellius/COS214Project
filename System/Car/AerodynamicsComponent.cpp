//
// Created by bieldt on 2020/10/31.
//

#include "AerodynamicsComponent.h"
#include "../Car/Memento/Component/ComponentCareTaker.h"
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

bool AerodynamicsComponent::softwareTest() {
    std::cout << "No software test can be performed on a aerodynamic component" << std::endl;
    return true;
}

bool AerodynamicsComponent::windTunnelTest() {
    std::cout << "Starting wind tunnel test on aerodynamic component, saving state of component" << std::endl;
    ComponentCareTaker* x = new ComponentCareTaker();
    x->setMemento(this);
    for (int i = 0; i < 500; ++i) {
       this->downForce -=log(i);
        this->windResistance += log(i);
        if (this->downForce<1 ){
            std::cout << "Wind tunnel test failed at test number : " + to_string(i) << " -  the downforce generated was not enough"<< std::endl;
            this->restore(x);
            return false;
        }else if(this->windResistance>20){
            std::cout << "Wind tunnel test failed at test number : " + to_string(i) << " -  the wind resistance was too high"<< std::endl;
            this->restore(x);
            return false;
        }
    }
    this->restore(x);
    std::cout << "Wind tunnel test passed, aerodynamic component restored to previous state"<< std::endl;
    return true;
}


