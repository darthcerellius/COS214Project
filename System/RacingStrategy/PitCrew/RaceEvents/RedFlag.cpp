//
// Created by Marco on 31/10/2020.
//

#include "RedFlag.h"

RedFlag::RedFlag(){
    std::cout << "EVENT NOTIFICAITON: Due to extremely hazardous conditions on the track, the red flag is displayed.\n";
}

RedFlag::~RedFlag() {}

std::string RedFlag::eventDescription() {
    return "EVENT RESPONSE: The race car acknowledges the red flag and cautiously approaches the track's exit.";
}