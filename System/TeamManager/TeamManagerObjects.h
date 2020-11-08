//
// Created by kyle-pc on 2020/11/05.
//

#ifndef COS214PROJECT_TEAMMANAGEROBJECTS_H
#define COS214PROJECT_TEAMMANAGEROBJECTS_H
#include <map>
#define FRIENDS \
friend class StrategyCommand; \
friend class TeamManager; \
friend class EngineeringCommand; \
friend class SeaTransport;    \
friend class RacingCommand;   \
friend class AirTransport;    \
friend class CarStoreCommand; \
friend class ServiceEngineeringCommand;

class StrategyTeam;
class EngineeringTeam;
class GoodsContainer;
class RaceWeekend;
class Car;
class CarCareTaker;

class CurrentSeason {
    //friends
    FRIENDS
    //fields
    static StrategyTeam *strategyTeam;
    static EngineeringTeam *engineeringTeam;
    static std::map<std::string, GoodsContainer> harbours;
    static RaceWeekend* currentWeekend;
    static CarCareTaker* garage;
    static Car* raceCar;

    static void shipToHarbor(std::string name, GoodsContainer container);
    static GoodsContainer getContainer(std::string name);

    static StrategyTeam *getStrategyTeam();

    static EngineeringTeam *getEngineeringTeam();
    static CarCareTaker* getGarage();

    static void clean();
    static void setRaceWeekend(RaceWeekend* rw);
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
