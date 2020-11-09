//
// Created by kyle-pc on 2020/11/05.
//

#include "TeamManagerObjects.h"
#include "../RacingStrategy/StrategyTeam.h"
#include "../Engineering/EngineeringTeam.h"
#include "../Container/GoodsContainer.h"
#include "../Calendar/RaceWeekend.h"
#include "../Car/Memento/Car/CarCareTaker.h"

StrategyTeam* CurrentSeason::strategyTeam = nullptr;
EngineeringTeam* CurrentSeason::engineeringTeam = nullptr;
RaceWeekend* CurrentSeason::currentWeekend = nullptr;
CarCareTaker* CurrentSeason::garage = nullptr;
Car* CurrentSeason::raceCar = nullptr;
Car* CurrentSeason::testingCar = nullptr;
int CurrentSeason::curSeason = 0;
int CurrentSeason::endSeason = 0;

StrategyTeam* NextSeason::strategyTeam = nullptr;
EngineeringTeam* NextSeason::engineeringTeam = nullptr;
std::map<std::string, GoodsContainer> CurrentSeason::harbours;

StrategyTeam *CurrentSeason::getStrategyTeam() {
    if (strategyTeam == nullptr) {
        strategyTeam = new StrategyTeam();
    }
    return strategyTeam;
}

CarCareTaker* CurrentSeason::getGarage() {
    if (garage == nullptr) {
        garage = new CarCareTaker();
    }
    return garage;
}

EngineeringTeam *CurrentSeason::getEngineeringTeam() {
    if (engineeringTeam == nullptr) {
        engineeringTeam = new EngineeringTeam();
    }
    return engineeringTeam;
}

void CurrentSeason::clean() {
    if (engineeringTeam != nullptr) {
        delete engineeringTeam;
        engineeringTeam = nullptr;
    }
    if (strategyTeam != nullptr) {
        delete strategyTeam;
        strategyTeam = nullptr;
    }
    if (garage != nullptr) {
        delete garage;
        garage = nullptr;
    }
}

void CurrentSeason::shipToHarbor(std::string name, GoodsContainer container) {
    harbours[name] = std::move(container);
}

GoodsContainer CurrentSeason::getContainer(std::string name) {
    return harbours[name];
}

void CurrentSeason::setRaceWeekend(RaceWeekend* rw) {
    currentWeekend = rw;
}

StrategyTeam *NextSeason::getStrategyTeam() {
    if (strategyTeam == nullptr) {
        strategyTeam = new StrategyTeam();
    }
    return strategyTeam;
}

EngineeringTeam *NextSeason::getEngineeringTeam() {
    if (engineeringTeam == nullptr) {
        engineeringTeam = new EngineeringTeam();
    }
    return engineeringTeam;
}

void NextSeason::clean() {
    if (engineeringTeam != nullptr) {
        delete engineeringTeam;
        engineeringTeam = nullptr;
    }
}
