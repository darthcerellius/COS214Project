//
// Created by Marco on 07/11/2020.
//

#include "Debugger.h"
#include <iostream>
#include <memory>
#include "../RacingStrategy/Strategies/CorneringTechnique.h"
#include "../RacingStrategy/Strategies/ConservativeStart.h"
#include "../RacingStrategy/Strategies/TaxiStyle.h"
#include "../RacingStrategy/Strategies/InertiaDrift.h"
#include "../RacingStrategy/Strategies/MinimalPitstops.h"
#include "../RacingStrategy/StrategyTeam.h"
#include "../Car/Car.h"
#include "../Car/Tyre/TyreSupplier.h"
#include "../RacingStrategy/PitCrew/PitCrew.h"
#include "../RacingStrategy/PitCrew/RaceEvents/WornTyres.h"
#include "../RacingStrategy/PitCrew/RaceEvents/BrokenComponent.h"
#include "../RacingStrategy/PitCrew/RaceEvents/YellowFlag.h"
#include "../RacingStrategy/PitCrew/RaceEvents/RedFlag.h"
#include "../RacingStrategy/PitCrew/RaceEvents/SafetyCar.h"
#include "../Car/Memento/Component/ComponentStore.h"

void Debugger::testStrategy(){
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
}

void Debugger::testPitCrewInstructions(){
    Car* testVehicle = new Car();
    PitCrew* testCrew = new PitCrew();
    testCrew->setCar(testVehicle);

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

    const int tacticalDecision = 0; //[0,inf)
    testCrew->makeTacticalInstruction(tacticalDecision);

    delete testCrew;
    delete testVehicle;
}

void Debugger::testTyres() {
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

void Debugger::testComponentMemento() {
    Component* z = new Engine(12,12);
    unique_ptr<Engine> x(dynamic_cast<Engine*>(z));
    ComponentStore * t = new ComponentStore();
    std::cout << "Before alteration " << to_string(x->getHP()) << " - " << to_string(x->getFuelConsumption()) << std::endl;
    t->setMemento(x->createMemento());
    x->setHP(213);
    x->setFuelConsumption(34223);
    std::cout << "Before restore " << to_string(x->getHP()) << " - " << to_string(x->getFuelConsumption()) << std::endl;
    x->restore(t->getMemento());
    std::cout << "After restore " << to_string(x->getHP()) << " - " << to_string(x->getFuelConsumption()) << std::endl;
    delete z;
    delete t;
}

void Debugger::testCarMemento() {

}

void Debugger::testTesting() {

}

void Debugger::testSimulation() {

}

void Debugger::testEngineering(){
    EngineeringTeam* engineeringTeam=new EngineeringTeam();
    engineeringTeam->buildCar();
    engineeringTeam->serviceCar();
}