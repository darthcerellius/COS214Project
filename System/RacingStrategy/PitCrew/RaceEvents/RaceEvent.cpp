//
// Created by Marco on 31/10/2020.
//

#include "RaceEvent.h"

RaceEvent::RaceEvent(){}

RaceEvent::~RaceEvent() {}

void RaceEvent::changeEvent(PitCrew * crew) {
    crew->observeNewEvent(this);
}