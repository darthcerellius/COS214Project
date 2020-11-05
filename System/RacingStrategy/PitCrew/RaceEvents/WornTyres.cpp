//
// Created by Marco on 31/10/2020.
//

#include "WornTyres.h"

WornTyres::WornTyres(){
    std::cout << "EVENT: The race car's tyres are worn out, and need to be replaced.\n";
}

WornTyres::~WornTyres() {}

std::string WornTyres::eventDescription() {
    return "EVENT: The race car proceeds to the pit stop to have its worn out tyres replaced.";
}