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
    //std::cout << "No software test can be performed on a aerodynamic component" << std::endl;
    return true;
}

bool AerodynamicsComponent::windTunnelTest(int &tokens) {

    if (tokens<0){
        std::cout<<"Already ran all 400 wind tunnel tests" << std::endl << std::endl;
        return true;
    }
    double prevWindVal = this->windResistance;
    std::cout << "Starting wind tunnel test on aerodynamic component, saving state of component" << std::endl;
    ComponentMemento* x = new ComponentMemento();
    x->setMemento(this);
    double factor = tokens/100.0;
    std::cout << "WIND TUNNEL TESTING : "<< to_string(tokens)  <<" tokens remaining : downforce before testing: " << to_string(this->downForce) << " | wind resistance before testing : " <<to_string(this->windResistance)<< std::endl;
    for (int i = 0; i < 10; ++i, tokens--) {
        if (tokens<0){
            std::cout<<"Already ran all 400 wind tunnel tests" << std::endl << std::endl;
           break;
        }
        this->downForce += factor;
        this->windResistance -= factor/10.0;
        factor = factor * 0.9;
        //std::cout << "WIND TUNNEL TESTING : "<< to_string(abs(tokens))  <<" tokens remaining : downforce altered to: " << to_string(this->downForce) << " | wind resistance altered to : " <<to_string(this->windResistance)<< std::endl;
        if (this->downForce<20 ){
            //std::cout << "Wind tunnel test failed at test number : " + to_string(i+1) << " -  the downforce generated was not enough to keep the car on the ground, current downforce : " << to_string(this->downForce)<< std::endl;
            this->restore(x);
            std::cout << "Failed - Restoring values : downforce = " << to_string(this->downForce) << ", wind resistance : " << to_string(this->windResistance) << std::endl << std::endl;
            delete x;
            return false;
        }
        if(this->windResistance < 0){
            this->windResistance=prevWindVal;
            std::cout << "TESTING - wind resistance reached optimal value, keeping it at optimal value : " << to_string(this->windResistance) <<std::endl << std::endl;
            delete x;
            return true;
        }
        if(this->windResistance>200 ){
            //std::cout << "Wind tunnel test failed at test number : " + to_string(i+1) << " -  the wind resistance was too high, current wind resistance : "<< to_string(this->windResistance)<< std::endl;
            this->restore(x);
            std::cout << "FAILED - Restoring values : downforce = " << to_string(this->downForce) << ", wind resistance : " << to_string(this->windResistance) << std::endl << std::endl;
            delete x;
            return false;
        }
        prevWindVal = this->getWindResistance();
    }
    std::cout << "TESTING final downforce : " << to_string(this->downForce) << ", final wind resistance : " << to_string(this->windResistance)<<std::endl;
    delete x;
    std::cout << "Wind tunnel test passed"<< std::endl<<std::endl;
    return true;
}


