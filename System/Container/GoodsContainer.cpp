//
// Created by kyle-pc on 2020/11/02.
//

#include "GoodsContainer.h"

void GoodsContainer::setShippingLabel(std::string track, std::string continent, Date *date) {
    shippingTrack = track;
    shippingContinent = continent;
    shippingDate = date;
    contents = "Catering goods, Drills, Nuts and bolts, Hammers, Screwdrivers, Crane, Jack";
}

std::string GoodsContainer::getTrack() {
    return shippingTrack;
}

std::string GoodsContainer::getContinent() {
    return shippingContinent;
}

Date *GoodsContainer::getDate() {
    return shippingDate;
}
