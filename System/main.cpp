//
// Created by kyle-pc on 2020/11/02.
//

#include <memory>
#include "TeamManager/TeamManager.h"
#include "Car/AerodynamicsComponent.h"
#include "Car/Engine.h"
#include "Car/Memento/Car/CarCareTaker.h"
#include "Car/Memento/Component/ComponentCareTaker.h"
#include "Car/Chassis.h"

using namespace std;
int main() {
    TeamManager* manager = TeamManager::getTeamManager();
    manager->run();
    delete manager;

    Component* c = new Car();
    Component *aero = new AerodynamicsComponent(12.0, 12.0);
    Component* engine = new Engine(500,500);
    c->add(aero);
    c->add(engine);
    CarCareTaker* careTaker = new CarCareTaker();
    careTaker->setMemento(dynamic_cast<Car*>(c)->createMemento());
    dynamic_cast<Car*>(c)->printComponents();
    c->remove("engine");
    c->remove("aerodynamic");
    std::cout << "After removing components" << std::endl;
    dynamic_cast<Car*>(c)->printComponents();
    dynamic_cast<Car*>(c)->restore(careTaker->getMemento());
    std::cout <<"After restoring" << std::endl;
    dynamic_cast<Car*>(c)->printComponents();
    delete c;
    delete aero;
    delete engine;
    delete careTaker;

    Component* chassis = new Chassis();
    chassis->softwareTest();
    chassis->windTunnelTest();
    delete chassis;
    Component* z = new Engine(12,12);
    Engine* x = dynamic_cast<Engine*>(z);
    ComponentCareTaker* t = new ComponentCareTaker();
    std::cout << "Before alteration " << to_string(x->getHP()) << " - " << to_string(x->getFuelConsumption()) << std::endl;
    t->setMemento(x->createMemento());
    x->setHP(213);
    x->setFuelConsumption(34223);
    std::cout << "Before restore " << to_string(x->getHP()) << " - " << to_string(x->getFuelConsumption()) << std::endl;
    x->restore(t->getMemento());
    std::cout << "After restore " << to_string(x->getHP()) << " - " << to_string(x->getFuelConsumption()) << std::endl;
    delete t;
    delete x;
    return 0;

}