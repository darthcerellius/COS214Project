//
// Created by janine on 2020/11/02.
//

#include <string>
#ifndef COS214PROJECT_RACEWEEKEND_H
#define COS214PROJECT_RACEWEEKEND_H

class RaceWeekend{
public:
    RaceWeekend(int day, int month, int year, std::string location, std::string trackName);
    void setDate(int day, int month, int year);
    int getDate();
    void setLocation(std::string location);
    std::string getLocation();
    void setName(std::string trackName);
    std::string getName();
private:
    int date;
    std::string location;
    std::string trackName;
};

#endif //COS214PROJECT_RACEWEEKEND_H
