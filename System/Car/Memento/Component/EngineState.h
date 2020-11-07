//
// Created by jeanre on 2020/11/05.
//

#ifndef COS214PROJECT_ENGINESTATE_H
#define COS214PROJECT_ENGINESTATE_H

#include <string>
#include "ComponentState.h"
class EngineState : public ComponentState {
private:
    int horsePower;
    int fuelConsumption;
    std::string name;
public:
    EngineState(int,int);
    EngineState();
    ~EngineState();
    void setHorsePower(int);
    int getHorsePower();
    void setfuelConsumption(int);
    int getFuelConsumption();
    void setName(std::string) override ;




};


#endif //COS214PROJECT_ENGINESTATE_H
