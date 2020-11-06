//
// Created by jeanre on 2020/11/05.
//

#ifndef COS214PROJECT_ENGINESTATE_H
#define COS214PROJECT_ENGINESTATE_H

#include <string>
#include "ComponentState.h"
class EngineState : public ComponentState {
private:
    double horsePower;
    double fuelConsumption;
    std::string name;
public:
    EngineState(double,double);
    EngineState();
    ~EngineState();
    void setHorsePower(double);
    double getHorsePower();
    void setfuelConsumption(double);
    double getFuelConsumption();
    void setName(std::string) override ;




};


#endif //COS214PROJECT_ENGINESTATE_H
