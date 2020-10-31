//
// Created by Marco on 31/10/2020.
//

#include "SafetyCar.h"

SafetyCar::SafetyCar(){
    std::cout << "A safety car enters the track ahead of the leader.\n";
}

SafetyCar::~SafetyCar() {}

std::string SafetyCar::eventDescription() {
    return "The race car slows down in order to stay behind the safety car until the safety car departs from the track.";
}