#include "CorneringTechnique.h"

CorneringTechnique::CorneringTechnique() {}

CorneringTechnique::~CorneringTechnique() {}

void CorneringTechnique::executeStrategy() {
    std::cout << "STRATEGY: The car makes use of the cornering technique during the race, reducing the lost speed around the corners of the racetrack by moving closer to the track's inner edge near a turn.\n";
}

GeneralRaceStrategy* CorneringTechnique::clone(){
    return new CorneringTechnique();
}