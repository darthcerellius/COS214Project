//
// Created by jeanre on 2020/11/02.
//

#include "ComponentMemento.h"
#include "../../Chassis.h"
#include "../../Engine.h"
#include "../../AerodynamicsComponent.h"
#include "../../Component.h"
ComponentMemento::ComponentMemento() {
    state = nullptr;
}
ComponentMemento::~ComponentMemento() {
    delete state;
}


ComponentState* ComponentMemento::getMemento() {
    if (state){
        return state;
    }else{
        std::cout <<"The memento has not yet been created, to access the memento, create one first" << std::endl;
        return nullptr;
    }

}

void ComponentMemento::setMemento(Component * c) {
    delete state;
    std::string type = c->getName();
    if(type=="chassis"){
        this->state = new ChassisAndAeroState(dynamic_cast<Chassis*>(c)->getDownForce(),dynamic_cast<Chassis*>(c)->getWindResistance(),"chassis");
    }else if(type=="aerodynamic"){
        this->state = new ChassisAndAeroState(dynamic_cast<AerodynamicsComponent*>(c)->getDownForce(),dynamic_cast<AerodynamicsComponent*>(c)->getWindResistance(),"aerodynamic");
    }else if(type=="engine"){
        this->state = new EngineState(dynamic_cast<Engine*>(c)->getHP(),dynamic_cast<Engine*>(c)->getFuelConsumption());
    }else{
        std::cout <<"Component state cannot be stored as there is no attributes in the component" << std::endl;
        return;
    }
}
