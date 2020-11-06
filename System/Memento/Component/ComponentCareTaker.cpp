//
// Created by jeanre on 2020/11/02.
//

#include "ComponentCareTaker.h"

ComponentCareTaker::ComponentCareTaker() {
    state = nullptr;
}
ComponentCareTaker::~ComponentCareTaker() {
    delete state;
}

//void ComponentCareTaker::setMemento(double strength, double weight, std::string name) {
//    this->state->setName(name);
//    this->state->setWeight(weight);
//    this->state->setStrength(strength);
//}
ComponentState* ComponentCareTaker::getMemento() {
    if (state){
        return state;
    }else{
        std::cout <<"The memento has not yet been created, to access the memento, create one first" << std::endl;
        return nullptr;
    }

}

void ComponentCareTaker::setMemento(Component * c) {
    delete state;
    std::string type = c->getName();
    if(type=="chassis"){
        this->state = new ChassisAndAeroState(dynamic_cast<Chassis*>(c)->getDownForce(),dynamic_cast<Chassis*>(c)->getWindResistance(),"chassis");
    }else if(type=="aerodynamic"){
        this->state = new ChassisAndAeroState(dynamic_cast<AerodynamicsComponent*>(c)->getDownForce(),dynamic_cast<AerodynamicsComponent*>(c)->getWindResistance(),"chassis");
    }else if(type=="engine"){
        this->state = new EngineState(dynamic_cast<Engine*>(c)->getHP(),dynamic_cast<Engine*>(c)->getFuelConsumption());
    }else{

    }
}
