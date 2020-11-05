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
}

void EngineeringTeam::buildCar() {
    car=new Car();
    car->add(buildAerodynamicsComponent());
    car->add(buildChassis());
    car->add(buildEngine());
    car->add(buildElectronicsComponent());
}

Car *EngineeringTeam::getCar() {
    return car;
}

void EngineeringTeam::serviceCar() {
    cout<<"Car has been serviced"<<endl;
}
