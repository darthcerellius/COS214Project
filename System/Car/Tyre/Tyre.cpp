//
// Created by Ivan on 2020/11/01.
//

#include "Tyre.h"

Tyre::Tyre(string name) : Component(name) {

}

Tyre::Tyre(Tyre *t) :Component(t->getName()){

}
Tyre::Tyre(Compound* state_):Component("tyre") {
    state = state_;
}

Tyre::~Tyre() {
    //delete state;
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


Compound* Tyre::getState() {
    return state;
}

bool Tyre::test() {
    int testResult = rand()%10;
    if(testResult == 0){
        return false;//test failed
    }else{
        return true;
    }
}

Component *Tyre::clone() {
    return dynamic_cast<Component*>(new Tyre(this));
}