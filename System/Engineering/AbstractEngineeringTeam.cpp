//
// Created by hannes on 2020/10/31.
//

#include "AbstractEngineeringTeam.h"

void AbstractEngineeringTeam::buildCar() {
    car=new Car();
    car->add(buildAerodynamicsComponent());
    car->add(buildChassis());
    car->add(buildEngine());
    car->add(buildElectronicsComponent());
    if(tyres)
        car->add(tyres);    //added by Marco
}

Car *AbstractEngineeringTeam::getCar() {
    return car;
}

void AbstractEngineeringTeam::serviceCar() {
    cout<<"Car has been serviced"<<endl;
}

//added by Marco
void AbstractEngineeringTeam::receiveOrderedTyres(Component* receivedTyres) {
    if(tyres)
        delete tyres;
    tyres = receivedTyres;
}

//added by Marco
AbstractEngineeringTeam::AbstractEngineeringTeam() {
    tyres = 0;
}