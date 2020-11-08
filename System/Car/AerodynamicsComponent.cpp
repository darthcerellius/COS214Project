//
// Created by bieldt on 2020/10/31.
//

#include "AerodynamicsComponent.h"
#include "../Car/Memento/Component/ComponentMemento.h"
AerodynamicsComponent::AerodynamicsComponent() : Component("aerodynamic") {
    this->windResistance=50;
    this->downForce=200;
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



ComponentMemento *AerodynamicsComponent::createMemento() {
    ComponentMemento* state=new ComponentMemento();
    state->setMemento(this);
    return state;

}

void AerodynamicsComponent::restore(ComponentMemento * state) {
    this->windResistance= dynamic_cast<ChassisAndAeroState*>(state->getMemento())->getWindResistance();
    this->downForce=dynamic_cast<ChassisAndAeroState*>(state->getMemento())->getDownForce();
    this->setName(dynamic_cast<ChassisAndAeroState*>(state->getMemento())->getName());

}

bool AerodynamicsComponent::softwareTest() {
    std::cout << "No software test can be performed on a aerodynamic component" << std::endl;
    return true;
}

bool AerodynamicsComponent::windTunnelTest(int &tokens) {
    std::cout << "Starting wind tunnel test on aerodynamic component, saving state of component" << std::endl;
    ComponentMemento* x = new ComponentMemento();
    x->setMemento(this);
    int val = 10;
    for (int i = 0; i < 20; ++i) {
        this->downForce += (i % 2) +val ;
        this->windResistance -=  (i%2)-val ;
        val = val /2 ;
        std::cout << "WINDTUNNEL TESTING - " << to_string(i+1) <<" : downforce has been adjusted to : " << to_string(this->downForce) << " | wind resistance has been adjusted to : " <<to_string(this->windResistance)<< std::endl;
        if (this->downForce<1 ){
            std::cout << "Wind tunnel test failed at test number : " + to_string(i+1) << " -  the downforce generated was not enough to keep the car on the ground, current downforce : " << to_string(this->downForce)<< std::endl;
            this->restore(x);
            std::cout << "Restored values : downforce = " << to_string(this->downForce) << ", wind resistance : " << to_string(this->windResistance) << std::endl << std::endl;
            delete x;
            return false;
        }else if(this->windResistance>300){
            std::cout << "Wind tunnel test failed at test number : " + to_string(i+1) << " -  the wind resistance was too high, current wind resistance : "<< to_string(this->windResistance)<< std::endl;
            this->restore(x);
            std::cout << "Restored values : downforce = " << to_string(this->downForce) << ", wind resistance : " << to_string(this->windResistance) << std::endl << std::endl;
            delete x;
            return false;
        }
    }
    std::cout << "TESTING final downforce : " << to_string(this->downForce) << ", final wind resistance : " << to_string(this->windResistance)<<std::endl;
    this->restore(x);
    delete x;
    std::cout << "Wind tunnel test passed, aerodynamic component restored to previous state"<< std::endl;
    std::cout << "Restored values : downforce = " << to_string(this->downForce) << ", wind resistance : " << to_string(this->windResistance) << std::endl << std::endl;

    return true;
}


