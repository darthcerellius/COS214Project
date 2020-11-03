//
// Created by janine on 2020/11/02.
//

#include "RaceWeekend.h"

RaceWeekend::RaceWeekend(int day, int month, int year, std::string location, std::string trackName){
    this->location = location;
    this->trackName = trackName;
    date = new Date();
    date->d = day;
    date->m = month;
    date->y = year;
}

void RaceWeekend::setDate(int day, int month, int year){
    date->d = day;
    date->m = month;
    date->y = year;
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

void RaceWeekend::setName(std::string trackName){
    this->trackName = trackName;
}
std::string RaceWeekend::getName(){
    return trackName;
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