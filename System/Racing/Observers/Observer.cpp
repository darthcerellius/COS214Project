//
// Created by kyle-pc on 2020/11/07.
//

#include "Observer.h"
#include "../RaceTrack.h"

Observer::Observer() {

}
void Observer::attach(RaceTrack *s) {
    subject = s;
}

void Observer::notify() {
    event = subject->getPosition();
}

int Observer::getEvent() {
    return event;
}
