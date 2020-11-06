//
// Created by kyle-pc on 2020/10/28.
//

#ifndef COS214PROJECT_TEAMMANAGER_H
#define COS214PROJECT_TEAMMANAGER_H

#include "Commands/Command.h"
#include "../Calendar/ConcreteCalendar.h"

class TeamManager{
private:
    Command* preSeasonCommand;
    Command* curSeasonCommand;
    ConcreteCalendar* calendar;
    static TeamManager manager;
    static bool isCreated;
public:
    ~TeamManager();
    static TeamManager& getTeamManager();
    void run();
private:
    TeamManager();
};


#endif //COS214PROJECT_TEAMMANAGER_H
