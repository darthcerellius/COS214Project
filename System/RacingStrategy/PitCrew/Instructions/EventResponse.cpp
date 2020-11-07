//
// Created by Marco on 01/11/2020.
//

#include "EventResponse.h"

EventResponse::EventResponse(Car* sentTo, RaceEvent* event) : Instruction() {
    this->sentTo = sentTo;
    this->event = event;
}

EventResponse::~EventResponse() {}

void EventResponse::executeInstruction() {
    if(sentTo && event)
        sentTo->respondToEvent(event->eventDescription());
    else
        std::cout << "DEBUG: Cannot respond to event since the receiver or the event is null in EventResponse command.\n";
}