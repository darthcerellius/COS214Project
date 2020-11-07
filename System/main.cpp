#include <iostream>
#include "RacingStrategy/Strategies/CorneringTechnique.h"
#include "RacingStrategy/Strategies/ConservativeStart.h"
#include "RacingStrategy/Strategies/TaxiStyle.h"
#include "RacingStrategy/Strategies/InertiaDrift.h"
#include "RacingStrategy/Strategies/MinimalPitstops.h"
#include "RacingStrategy/StrategyTeam.h"
#include "Car/Car.h"
#include "Car/Tyre/TyreSupplier.h"
#include "RacingStrategy/PitCrew/PitCrew.h"
#include "RacingStrategy/PitCrew/RaceEvents/WornTyres.h"
#include "RacingStrategy/PitCrew/RaceEvents/BrokenComponent.h"
#include "RacingStrategy/PitCrew/RaceEvents/YellowFlag.h"
#include "RacingStrategy/PitCrew/RaceEvents/RedFlag.h"
#include "RacingStrategy/PitCrew/RaceEvents/SafetyCar.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    return 0;
}