//
// Created by jeanre on 2020/11/05.
//

#ifndef COS214PROJECT_ENGINESTATE_H
#define COS214PROJECT_ENGINESTATE_H

#include <string>
#include "ComponentState.h"
class EngineState : public ComponentState {
private:
    int horsePower; ///stores the value of the engine's HP variable
    int fuelConsumption; ///stores the value of the engine's fuel consumption variable

public:
    /**
     *
     * @param horsePower sets horsepower variable
     * @param fuelConsumption setns fuelConsumption variable
     */
    EngineState(int horsePower,int fuelConsumption);
    EngineState();
    ~EngineState();
    void setHorsePower(int);
    int getHorsePower();
    void setfuelConsumption(int);
    int getFuelConsumption();
    void setName(std::string) override ;




};


#endif //COS214PROJECT_ENGINESTATE_H
