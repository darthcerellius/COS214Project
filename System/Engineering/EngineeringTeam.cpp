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
