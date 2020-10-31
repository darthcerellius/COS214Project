//
// Created by Marco on 31/10/2020.
//

#include "YellowFlag.h"

YellowFlag::YellowFlag(){
    std::cout << "Due to mildly hazardous conditions on the track, the yellow flag is displayed.\n";
}

YellowFlag::~YellowFlag() {}

string YellowFlag::eventDescription() {
    return "The race car acknowledges the yellow flag and slows down until the flag is no longer displayed.";
}