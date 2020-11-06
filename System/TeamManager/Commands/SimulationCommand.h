//
// Created by kyle-pc on 2020/11/06.
//

#ifndef COS214PROJECT_SIMULATIONCOMMAND_H
#define COS214PROJECT_SIMULATIONCOMMAND_H

#include "../../Simulation/Simulation.h"
#include "Command.h"

class SimulationCommand : public Command {
    SimulationCommand();
    void execute(Car *car) override;
};


#endif //COS214PROJECT_SIMULATIONCOMMAND_H
