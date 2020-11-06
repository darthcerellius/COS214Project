//
// Created by jeanre on 2020/11/02.
//

#include "ComponentState.h"

ComponentState::ComponentState(std::string name) {
    this->name = name;
}

ComponentState::~ComponentState() {

}

std::string ComponentState::getName() {
    return this->name;
}

void ComponentState::setName(std::string newName) {
    this->name = newName;
}
