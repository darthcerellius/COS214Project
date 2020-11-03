//
// Created by janine on 2020/11/02.
//

#include "RaceWeekend.h"

RaceWeekend::RaceWeekend(int day, int month, int year, std::string location, std::string trackName){
    this->location = location;
    this->trackName = trackName;
}

void RaceWeekend::setDate(int day, int month, int year){

}

int RaceWeekend::getDate(){
    return date;
}

void RaceWeekend::setLocation(std::string location){
    this->location = location;
}

std::string RaceWeekend::getLocation(){
    return location;
}

void RaceWeekend::setName(std::string trackName){
    this->trackName = trackName;
}
std::string RaceWeekend::getName(){
    return trackName;
}