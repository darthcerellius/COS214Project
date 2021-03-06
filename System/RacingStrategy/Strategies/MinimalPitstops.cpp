#include "MinimalPitstops.h"

MinimalPitstops::MinimalPitstops() {}

MinimalPitstops::~MinimalPitstops() {}

void MinimalPitstops::executeStrategy() {
    std::cout << "STRATEGY: The car makes a minimal amount of pitstops during the race, ensuring that it retains its position for as long as possible without needing to stop for unnecesary maintenance.\n";
}

GeneralRaceStrategy* MinimalPitstops::clone() {
    return new MinimalPitstops();
}