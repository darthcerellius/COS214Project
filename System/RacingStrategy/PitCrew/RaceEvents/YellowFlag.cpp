//
// Created by Marco on 31/10/2020.
//

#include "YellowFlag.h"

YellowFlag::YellowFlag(){
    std::cout << "EVENT: Due to mildly hazardous conditions on the track, the yellow flag is displayed.\n";
}

YellowFlag::~YellowFlag() {}

std::string YellowFlag::eventDescription() {
    return "EVENT RESPONSE: The race car acknowledges the yellow flag and slows down until the flag is no longer displayed.";
}