//
// Created by bieldt on 2020/10/31.
//

#include "Chassis.h"

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
//TODO implementation
bool Chassis::test() {
    int testResult = rand()%10;
    if(testResult == 0){
        return false;//test failed
    }else{
        return true;
    }
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



