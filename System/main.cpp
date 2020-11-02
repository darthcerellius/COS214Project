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

void testStrategy();
void testPitCrewInstructions();
void testTyres();//----->Ivan

int main() {
    std::cout << "Hello, World!" << std::endl;
    //testStrategy();
    testPitCrewInstructions();

    //testTyres();//----->Ivan

    return 0;
}

void testStrategy(){
    //------------------------Testing for Racing Strategy--------------------------
    Car* testVehicle = new Car();
    StrategyTeam* stratTeam = new StrategyTeam(testVehicle);
    const int chosenStrategy = 3;     //chosenStrategy must be [0,3]
    //0 = MinimalPitstops
    //1 = ConservativeStart
    //2 = TaxiStyle
    //3 = CorneringTechnique
    //4 = InertiaDrift
    stratTeam->decideStrategy(chosenStrategy);
    testVehicle->executeStrategy();
    delete stratTeam;
    delete testVehicle;
    //-----------------------------------------------------------------------------
}

void testPitCrewInstructions(){
    //------------------------Testing for Pit Crew instructions--------------------------
    Car* testVehicle = new Car();
    PitCrew* testCrew = new PitCrew(testVehicle);

    RaceEvent* currEvent = new SafetyCar();
    //currEvent can be
    /*
     WornTyres
     BrokenComponent
     YellowFlag
     RedFlag
     SafetyCar
     */
    currEvent->changeEvent(testCrew);
    delete currEvent;

    delete testCrew;
    delete testVehicle;
    //-----------------------------------------------------------------------------------
}

void testTyres() {//----->Ivan
    Supplier* tyreFact = new TyreSupplier();
    //Compound* comp = new SoftCompound();
    //Tyre* t = new Tyre(comp);
    Component* t1 = tyreFact->supply();
    Tyre* t = dynamic_cast<Tyre*>(t1);
    std::cout << t->getCompound() << std::endl;
    t->change();
    std::cout << t->getCompound() << std::endl;
    t->change();
    std::cout << t->getCompound() << std::endl;
    t->change();
    std::cout << t->getCompound() << std::endl;
    t->change();
    std::cout << t->getCompound() << std::endl;

    /*
        Soft Compound
        Medium Compound
        Hard Compound
        Soft Compound
        Medium Compound
    */
}