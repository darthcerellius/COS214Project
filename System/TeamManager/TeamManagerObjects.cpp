//
// Created by kyle-pc on 2020/11/05.
//

#include "TeamManagerObjects.h"
#include "../RacingStrategy/StrategyTeam.h"
#include "../Engineering/EngineeringTeam.h"
#include "../Container/GoodsContainer.h"

StrategyTeam* CurrentSeason::strategyTeam = nullptr;
EngineeringTeam* CurrentSeason::engineeringTeam = nullptr;

StrategyTeam* NextSeason::strategyTeam = nullptr;
EngineeringTeam* NextSeason::engineeringTeam = nullptr;
std::map<std::string, GoodsContainer> CurrentSeason::harbours;

StrategyTeam *CurrentSeason::getStrategyTeam(Car* car) {
    if (strategyTeam == nullptr) {
        strategyTeam = new StrategyTeam(car);
    }
    return strategyTeam;
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
}

void CurrentSeason::shipToHarbor(std::string name, GoodsContainer container) {
    harbours[name] = std::move(container);
}

GoodsContainer CurrentSeason::getContainer(std::string name) {
    return harbours[name];
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
