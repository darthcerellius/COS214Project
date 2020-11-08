//
// Created by kyle-pc on 2020/11/06.
//

#ifndef COS214PROJECT_SIMULATIONCOMMAND_H
#define COS214PROJECT_SIMULATIONCOMMAND_H

#include "../../Simulation/Simulation.h"
#include "Command.h"

/**
 * @brief Uses the Simulation class to run a simulation on the car.
 */
class SimulationCommand : public Command {
private:
    Simulation* simulation;
public:
    SimulationCommand();
    ~SimulationCommand() override;
    void execute(Car *car) override;
};


#endif //COS214PROJECT_SIMULATIONCOMMAND_H
