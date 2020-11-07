//
// Created by jeanre on 2020/11/05.
//

#include "ChassisAndAeroState.h"

void ChassisAndAeroState::setDownForce(double newDownForce) {
    this->downForce=newDownForce;
}

double ChassisAndAeroState::getDownForce() {
    return this->downForce;
}

void ChassisAndAeroState::setWindResistance(double newWindResistance) {
    this->windResistance=newWindResistance;
}

double ChassisAndAeroState::getWindResistance() {
    return this->windResistance;
}


ChassisAndAeroState::ChassisAndAeroState(double downForce, double windResistance, std::string name):ComponentState(name) {
    this->windResistance=windResistance;
    this->downForce=downForce;

}

ChassisAndAeroState::ChassisAndAeroState() :ComponentState("N/A"){
    this->downForce=0;
    this->windResistance=0;
}

void ChassisAndAeroState::setName(std::string newName) {
    this->name = newName;
}
