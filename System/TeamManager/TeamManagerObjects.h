//
// Created by kyle-pc on 2020/11/05.
//

#ifndef COS214PROJECT_TEAMMANAGEROBJECTS_H
#define COS214PROJECT_TEAMMANAGEROBJECTS_H
#define FRIENDS \
friend class StrategyCommand; \
friend class TeamManager; \
friend class EngineeringCommand;

class StrategyTeam;
class EngineeringTeam;
class Car;

class CurrentSeason {
    //friends
    FRIENDS
    //fields
    static StrategyTeam *strategyTeam;
    static EngineeringTeam *engineeringTeam;

    static StrategyTeam *getStrategyTeam(Car* car);

    static EngineeringTeam *getEngineeringTeam();

    static void clean();
};

class NextSeason {
    //friends
    FRIENDS
    //fields
    static StrategyTeam *strategyTeam;
    static EngineeringTeam *engineeringTeam;

    static StrategyTeam *getStrategyTeam();

    static EngineeringTeam *getEngineeringTeam();

    static void clean();

};


#endif //COS214PROJECT_TEAMMANAGEROBJECTS_H
