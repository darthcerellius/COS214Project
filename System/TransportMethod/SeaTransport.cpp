//
// Created by kyle-pc on 2020/11/02.
//

#include "SeaTransport.h"
#include "../Calendar/RaceWeekend.h"
#include "../TeamManager/TeamManagerObjects.h"
#include <iostream>

SeaTransport::SeaTransport() {

}

SeaTransport::~SeaTransport() {

}

void SeaTransport::package(GoodsContainer component) {
    std::cout << "Scheduling container shipment..." << std::endl;
    int year = component.getDate()->y;
    int month = component.getDate()->m;
    int day = component.getDate()->d;
    if (month - 3 < 0) {
        year -=1;
        month = (month-3) % 12;
    } else {
        month -= 3;
    }
    if (month == 0) {
        year -= 1;
        month = 12;
    }
    std::cout << "Setting shipping date for container to " << year << "-" << (month < 10 ? "0" : "")
                << month << "-" << (day < 10 ? "0" : "") << day << std::endl;
    Date date{day, month, year};
    std::cout << "ETA: " << RaceWeekend::daysBetween(&date, component.getDate()) << " days!" << std::endl;
    shippingContainer = std::move(component);
}

void SeaTransport::ship() {
    std::cout << "Container is being shipped to " << shippingContainer.getContinent() << std::endl;
    std::cout << std::endl;
    CurrentSeason::shipToHarbor(shippingContainer.getContinent() + "Harbor", shippingContainer);
    /*might put an instance of this class to the team manager for later retrieval*/
}

GoodsContainer SeaTransport::unpackage(std::string place) {
    std::cout << "Unloading package for continent " << place << std::endl;
    return CurrentSeason::getContainer(place + "Harbor");
}
