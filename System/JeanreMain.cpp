//
// Created by kyle-pc on 2020/11/02.
//

#include <iostream>
#include <fstream>
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
#include "Memento/Component/ComponentStore.h"
#include "Memento/Car/CarStore.h"
#include "Memento/Car/CarCareTaker.h"
#include "Memento/Component/ComponentCareTaker.h"
#include "TeamManager/TeamManager.h"


using namespace std;
int main() {
//    TeamManager manager = TeamManager::getTeamManager();
//    manager.run();
    Component* z = new Engine(12,12);
    Engine*x = dynamic_cast<Engine*>(z);
    ComponentStore * t = new ComponentStore();
    std::cout << "Before alteration " << to_string(x->getHP()) << " - " << to_string(x->getFuelConsumption()) << std::endl;
    t->setMemento(x->createMemento());
    x->setHP(213);
    x->setFuelConsumption(34223);
    std::cout << "Before restore " << to_string(x->getHP()) << " - " << to_string(x->getFuelConsumption()) << std::endl;
    x->restore(t->getMemento());
    std::cout << "After restore " << to_string(x->getHP()) << " - " << to_string(x->getFuelConsumption()) << std::endl;

    x->softwareTest();
    x->setFuelConsumption(4);
    x->softwareTest();
    x->setHP(1000);
    x->softwareTest();
    std::cout << std::endl << std::endl<<std::endl;
    Component * a = new AerodynamicsComponent();
    AerodynamicsComponent* aero = dynamic_cast<AerodynamicsComponent*>(a);
    t->setMemento(aero->createMemento());
    std::cout << "Before alteration " << to_string(aero->getWindResistance()) << " - " << to_string(aero->getDownForce()) << std::endl;
    aero->setDownForce(50000000.0);
    aero->setWindResistance(2.0);
    std::cout << "After alteration " << to_string(aero->getWindResistance()) << " - " << to_string(aero->getDownForce()) << std::endl;
    aero->windTunnelTest();
    aero->restore(t->getMemento());
    std::cout << "After restore " << to_string(aero->getWindResistance()) << " - " << to_string(aero->getDownForce()) << std::endl << std::endl<<std::endl;


//    Component* c = new Car();
//    c->add(x);
//    c->add(aero);
//    Car* car = dynamic_cast<Car*>(c);
//    car->softwareTest();




}