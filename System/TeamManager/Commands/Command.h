//
// Created by kyle-pc on 2020/11/04.
//

#ifndef COS214PROJECT_COMMAND_H
#define COS214PROJECT_COMMAND_H

#include "../../Car/Car.h"
#include "../TeamManagerObjects.h"

/**
 * @brief Command object that executes part of the system
 *
 * The Command class is the abstract class that allows concrete commands to be
 * linked in a Chain of Responsibility. This class enables linking, while the
 * children commands implement the execute function.
 */
class Command {
protected:
    Command* successor;
public:
    /**
     * Default constructor
     */
    Command();
    /**
     * Default virtual destructor
     */
    virtual ~Command();
    /**
     * Adds a successor command to the Chain
     * @param succ - the successor command to add
     */
    void addSuccessor(Command* succ);
    /**
     * Invokes the class to run a specific aspect of the system.
     * @param car - A Car object for the command class to use.
     */
    virtual void execute(Car* car) = 0;

};


#endif //COS214PROJECT_COMMAND_H
