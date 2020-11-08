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
#include "../Car/Memento/Component/ComponentCareTaker.h"
#include "../Car/Memento/Car/CarCareTaker.h"
#include "../Testing/Testing.h"
#include "../Testing/SoftwareTest.h"
#include "../Testing/WindTunnelTest.h"
#include "../Simulation/Simulation.h"
#include "../Racing/SimulationTrack.h"

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
    ComponentCareTaker* t = new ComponentCareTaker();
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
    Component* c = new Car();
    Component *aero = new AerodynamicsComponent(12.0, 12.0);
    Component* engine = new Engine(500,500);
    c->add(aero);
    c->add(engine);
    CarCareTaker* store = new CarCareTaker();
    store->setMemento(dynamic_cast<Car*>(c)->createMemento());
    dynamic_cast<Car*>(c)->printComponents();
    c->remove("engine");
    c->remove("aerodynamic");
    std::cout << "After removing components" << std::endl;
    dynamic_cast<Car*>(c)->printComponents();
    dynamic_cast<Car*>(c)->restore(store->getMemento());
    std::cout <<"After restoring" << std::endl;
    dynamic_cast<Car*>(c)->printComponents();
    delete c;
    delete aero;
    delete engine;
    delete store;


}

void Debugger::testTesting() {
    Component* c = new Car();
    Component *aero = new AerodynamicsComponent(12.0, 12.0);
    Component* engine = new Engine(500,500);
    c->add(aero);
    c->add(engine);
    Testing * softwareTesting = new SoftwareTest();
    Testing * windtunnelTesting = new WindTunnelTest();
    softwareTesting->test(c);
    windtunnelTesting->test(c);
    delete c;
    delete aero;
    delete engine;
}

void Debugger::testSimulation() {
    RaceTrack * track = new SimulationTrack();
    Component* c = new Car();
    Component *aero = new AerodynamicsComponent(12.0, 12.0);
    Component* engine = new Engine(500,500);
    c->add(aero);
    c->add(engine);
    Simulation * sim = new Simulation();
    sim->Simulate(dynamic_cast<Car*>(c),track);
}

void Debugger::testEngineering(){
    EngineeringTeam* engineeringTeam=new EngineeringTeam();
    engineeringTeam->buildCar();
    engineeringTeam->serviceCar();
    delete engineeringTeam;
}