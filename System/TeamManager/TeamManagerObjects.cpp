//
// Created by kyle-pc on 2020/11/05.
//

#include "TeamManagerObjects.h"
#include "../RacingStrategy/StrategyTeam.h"
#include "../Engineering/EngineeringTeam.h"

StrategyTeam* CurrentSeason::strategyTeam = nullptr;
EngineeringTeam* CurrentSeason::engineeringTeam = nullptr;

StrategyTeam* NextSeason::strategyTeam = nullptr;
EngineeringTeam* NextSeason::engineeringTeam = nullptr;

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
