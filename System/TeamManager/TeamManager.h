//
// Created by kyle-pc on 2020/10/28.
//

#ifndef COS214PROJECT_TEAMMANAGER_H
#define COS214PROJECT_TEAMMANAGER_H

#include "Commands/Command.h"
#include "../Calendar/ConcreteCalendar.h"

/**
 * @brief Facade class responsible for the runtime of the entire system.
 *
 * This class constructs the Pre-Season and Current season command chains and
 * Calendar class to coordinate and facilitate the running of the entire system.
 */
class TeamManager{
private:
    Command* preSeasonCommand;
    Command* curSeasonCommand;
    Command* nextCommand;
    ConcreteCalendar* calendar;
    Car* raceCar;
    static TeamManager* manager;
    static bool isCreated;
public:
    ~TeamManager();
    /**
     * Static getter function to ensure that only one Team manager instance can exist.
     * @return - a single Team Manager instance
     */
    static TeamManager* getTeamManager();
    /**
     * Runs the system
     */
    void run();
private:
    /**
     * Private constructor.
     */
    TeamManager();
};


#endif //COS214PROJECT_TEAMMANAGER_H
