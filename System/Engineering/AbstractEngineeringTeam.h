//
// Created by hannes on 2020/10/31.
//

#ifndef COS214PROJECT_ABSTRACTENGINEERINGTEAM_H
#define COS214PROJECT_ABSTRACTENGINEERINGTEAM_H

#include "../Car/Car.h"

class AbstractEngineeringTeam {
protected:
    Car* car;
    virtual Component* buildEngine()=0;
    virtual Component* buildAerodynamicsComponent()=0;
    virtual Component* buildElectronicsComponent()=0;
    virtual Component* buildChassis()=0;
public:
    void buildCar();
    Car* getCar();
    void serviceCar();
};


#endif //COS214PROJECT_ABSTRACTENGINEERINGTEAM_H
