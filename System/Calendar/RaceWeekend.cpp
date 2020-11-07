//
// Created by janine on 2020/11/02.
//

#include "RaceWeekend.h"

RaceWeekend::RaceWeekend(std::string _trackName, double _length, std::string _location, Date* _date, Conditions* _condis){
    trackName = _trackName;
    length = _length;
    location = _location;
    date = _date;
    condis = _condis;
}

void RaceWeekend::setName(std::string _trackName){
    trackName = _trackName;
}
std::string RaceWeekend::getName(){
    return trackName;
}

void RaceWeekend::setLength(double _length){
    length = _length;
}

double RaceWeekend::getLength(){
    return length;
}

void RaceWeekend::setDate(Date* _date){
    date = _date;
}

Date* RaceWeekend::getDate(){
    return date;
}

void RaceWeekend::setLocation(std::string location){
    this->location = location;
}

std::string RaceWeekend::getLocation(){
    return location;
}

void RaceWeekend::setCondis(Conditions* _condis){
    condis = _condis;
}

Conditions* RaceWeekend::getCondis(){
    return condis;
}

int RaceWeekend::daysBetween(Date* date1, Date* date2){
    int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    long int num1 = date1->y * 365 + date1->d;
    for(int i = 0; i < date1->m - 1; i++){
        num1 += monthDays[i];
    }
    num1 += countLeapYears(date1);

    long int num2 = date2->y * 365 + date2->d;
    for(int i = 0; i < date2->m - 1; i++) {
        num2 += monthDays[i];
    }
    num2 += countLeapYears(date2);

    return (num2 - num1);
}

int RaceWeekend::countLeapYears(Date* date){
    int years = date->y;

    if (date->m <= 2) {
        years--;
    }

    return years/4 - years/100 + years/400;
}

RaceWeekend::~RaceWeekend() {
    delete date;
    delete condis;
}
