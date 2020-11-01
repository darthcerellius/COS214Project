//
// Created by hannes on 2020/10/31.
//

#ifndef COS214PROJECT_ENGINEERINGTEAM_H
#define COS214PROJECT_ENGINEERINGTEAM_H

#include "AbstractEngineeringTeam.h"
#include "ConcreteFactories/AerodynamicsFactory.h"
#include "ConcreteFactories/EngineFactory.h"
#include "ConcreteFactories/ElectronicsFactory.h"
#include "ConcreteFactories/ChassisFactory.h"

class EngineeringTeam : public AbstractEngineeringTeam{
private:
    //double AerodynamicsBudget;//I think this should be removed and the AbstractEngineeringTeam should just become the EngineeringTeam
    //double EngineBudget;//
    //double ElectronicsBudget;//
    //double ChassisBudget;//
    AerodynamicsFactory* aerodynamicsFactory;
    EngineFactory* engineFactory;
    ElectronicsFactory* electronicsFactory;
    ChassisFactory* chassisFactory;
protected:
    AerodynamicsComponent* buildAerodynamicsComponent() override;
    Engine* buildEngine() override;
    ElectronicsComponent* buildElectronicsComponent() override;
    Chassis* buildChassis() override;
public:
    EngineeringTeam();
};


#endif //COS214PROJECT_ENGINEERINGTEAM_H
