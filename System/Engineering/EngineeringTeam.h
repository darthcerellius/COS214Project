//
// Created by hannes on 2020/10/31.
//

#ifndef COS214PROJECT_ENGINEERINGTEAM_H
#define COS214PROJECT_ENGINEERINGTEAM_H

#include "ConcreteFactories/AerodynamicsFactory.h"
#include "ConcreteFactories/EngineFactory.h"
#include "ConcreteFactories/ElectronicsFactory.h"
#include "ConcreteFactories/ChassisFactory.h"
#include "../Car/Car.h"

class EngineeringTeam{
private:
    AerodynamicsFactory* aerodynamicsFactory;
    EngineFactory* engineFactory;
    ElectronicsFactory* electronicsFactory;
    ChassisFactory* chassisFactory;

    Car* car;
    Engine* buildEngine();
    AerodynamicsComponent* buildAerodynamicsComponent();
    ElectronicsComponent* buildElectronicsComponent();
    Chassis* buildChassis();
public:
    EngineeringTeam();
    ~EngineeringTeam();
    void buildCar();
    Car* getCar();
    void serviceCar();
};


#endif //COS214PROJECT_ENGINEERINGTEAM_H
