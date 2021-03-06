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

/**
 * @brief EngineeringTeam is used to build the car using the Factory and service the car
 */

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
    /**
     * Constructs the car and adds all the components
     */
    void buildCar();
    /**
     * Gets the car that EngineeringTeam holds
     * @return Returns the car
     */
    Car* getCar();
    /**
     * Services the car (Outputs relevant info)
     */
    void serviceCar();


    /**
     * A method to set the active car of this engineering team.
     * @param car - The car component to set to the active car.
     * */
    void setCar(Car* car);
/**
 * Changes the mode of the electronics in the car.
 * @param s - The string description of the new mode.
 * */
    void changeElectronicsMode(string);
};


#endif //COS214PROJECT_ENGINEERINGTEAM_H
