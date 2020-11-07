//
// Created by Ivan on 2020/11/01.
//

#include "Tyre.h"
#include "Compound.h"
Tyre::Tyre(string name) : Component(name) {

}

Tyre::Tyre(Tyre *t) :Component(t->getName()){

}
Tyre::Tyre(Compound* state_):Component("tyre") {
    state = state_;
}

Tyre::~Tyre() {
    delete state;
}

void Tyre::change() {
    state->handleChange(this);
}

string Tyre::getCompound() {
    return state->getCompound();
}

void Tyre::setState(Compound *state_) {
    state = state_;
}


Component *Tyre::clone() {
    return dynamic_cast<Component*>(new Tyre(this));
}

bool Tyre::softwareTest() {
    std::default_random_engine generator;
    std::binomial_distribution<int> distribution(9,0.5);
    if (distribution(generator) >4 &&distribution(generator)<6 ){
        std::cout << "Tyre passed the software test" << std::endl;
        return true;
    }else{
        std::cout <<"Tyre failed the software test" << std::endl;
        return false;
    }
}

bool Tyre::windTunnelTest() {
    std::cout << "Tyre not suitable for wind tunnel test" << std::endl;
    return true;
}
