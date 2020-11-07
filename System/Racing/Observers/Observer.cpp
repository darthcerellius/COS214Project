//
// Created by kyle-pc on 2020/11/07.
//

#include "Observer.h"
#include "../RealRaceTrack.h"

Observer::Observer() {

}
void Observer::attach(RealRaceTrack *s) {
    subject = s;
}

void Observer::notify() {
    event = subject->getPosition();
}

int Observer::getEvent() {
    return event;
}
