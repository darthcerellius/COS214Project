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
 * This class
 */
class TeamManager{
private:
    Command* preSeasonCommand;
    Command* curSeasonCommand;
    ConcreteCalendar* calendar;
    Car* raceCar;
    static TeamManager* manager;
    static bool isCreated;
public:
    ~TeamManager();
    static TeamManager* getTeamManager();
    void run();
private:
    TeamManager();
};


#endif //COS214PROJECT_TEAMMANAGER_H
