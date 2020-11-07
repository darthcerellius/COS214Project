//
// Created by hannes on 2020/10/31.
//

#include "EngineeringTeam.h"

AerodynamicsComponent* EngineeringTeam::buildAerodynamicsComponent() {
    return aerodynamicsFactory->constructComponent();
}

Engine* EngineeringTeam::buildEngine() {
    return engineFactory->constructComponent();
}

ElectronicsComponent* EngineeringTeam::buildElectronicsComponent() {
    return electronicsFactory->constructComponent();
}

Chassis* EngineeringTeam::buildChassis(){
    return chassisFactory->constructComponent();
}

EngineeringTeam::EngineeringTeam() {
    aerodynamicsFactory=new AerodynamicsFactory();
    electronicsFactory=new ElectronicsFactory();
    engineFactory=new EngineFactory();
    chassisFactory=new ChassisFactory();
    car= nullptr;
}

void EngineeringTeam::buildCar() {
    if(car!=nullptr) return;
    car=new Car();
    car->add(buildAerodynamicsComponent());
    car->add(buildChassis());
    car->add(buildEngine());
    car->add(buildElectronicsComponent());

    cout<<"Engineering: Car constructed successfully!"<<endl;
}

Car *EngineeringTeam::getCar() {
    return car;
}

void EngineeringTeam::serviceCar() {
    cout<<"Engineering: Car has been serviced"<<endl;
}

EngineeringTeam::~EngineeringTeam() {
    delete engineFactory;
    delete chassisFactory;
    delete aerodynamicsFactory;
    delete electronicsFactory;
    delete car;

}
