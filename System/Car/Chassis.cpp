//
// Created by bieldt on 2020/10/31.
//

#include "Chassis.h"

Chassis::Chassis():Component("chassis") {
    this->strength = 12.0;
}
Chassis::Chassis(Chassis *c): Component("chassis") {

}
Chassis::~Chassis() {

}
//TODO implementation
bool Chassis::test() {
    int testResult = rand()%10;
    if(testResult == 0){
        return false;//test failed
    }else{
        return true;
    }
}

Component *Chassis::clone() {
    return dynamic_cast<Component*>(new Chassis(this));
}

ComponentCareTaker *Chassis::createMemento() {
    ComponentCareTaker* newMemento = new ComponentCareTaker();
    newMemento->setMemento(getStrength(),getWeight(),getName());
    return newMemento;
}

void Chassis::restore(ComponentCareTaker *m) {
    this->name = m->getMemento()->getName();
    this->weight = m->getMemento()->getWeight();
    this->strength = m->getMemento()->getStrength();
}


