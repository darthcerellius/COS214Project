//
// Created by bieldt on 2020/10/31.
//

#include "Chassis.h"
#include "../Car/Memento/Component/ComponentMemento.h"
#include "../Car/Memento/Component/ComponentCareTaker.h"

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

bool Chassis::windTunnelTest(int &tokens) {

    std::cout <<"Starting wind tunnel test on chassis" << std::endl;
    std::cout << "Saving state of chassis" << std::endl;
    ComponentCareTaker * care = new ComponentCareTaker();
    ComponentMemento* s = new ComponentMemento();
    care->setMemento(this->createMemento());
    double factor = tokens/100;
    std::cout << "WIND TUNNEL TESTING - "<< tokens  <<" tokens remaining : downforce before testing: " << to_string(this->downForce) << " | wind resistance before testing : " <<to_string(this->windResistance)<< std::endl;
    for (int i = 0; i < 20; ++i, tokens--) {
        this->downForce += factor;
        this->windResistance -= factor;
        factor = factor * 0.9;


        if (this->downForce<0.000001 ){
            //std::cout << "Wind tunnel test failed at test number : " + to_string(i+1) << ", the downforce generated was not enough to keep the car on the ground, current downforce = "<< to_string(this->downForce)<< std::endl;
            restore(care->getMemento());
            //std::cout << "Restored values : downforce = " << to_string(this->downForce) << ", wind resistance : " << to_string(this->windResistance) << std::endl << std::endl;
            delete s;
            delete care;
            return false;
        }else if(this->windResistance>200){
            //std::cout << "Wind tunnel test failed at test number : " + to_string(i+1) << ", the wind resistance was too high for the car to move fast enough, current windresistance : " << to_string(this->windResistance)<< std::endl;
            restore(care->getMemento());
            //std::cout << "Restored values : downforce = " << to_string(this->downForce) << ", wind resistance : " << to_string(this->windResistance) << std::endl<<std::endl;
            delete s;
            delete care;
            return false;
        }
    }
    std::cout << "END TESTING final downforce : " << to_string(this->downForce) << ", final wind resistance : " << to_string(this->windResistance)<<std::endl;
    //this->restore(care->getMemento());
    delete s;
    delete care;
    //std::cout << "Wind tunnel test passed, chassis restored to previous state"<< std::endl;
    std::cout << "Restored values : downforce = " << to_string(this->downForce) << ", wind resistance : " << to_string(this->windResistance) << std::endl << std::endl;
    return true;
}

bool Chassis::softwareTest() {
    std::cout << "No software test can be performed on a chassis" << std::endl << std::endl;
    return true;;
}



