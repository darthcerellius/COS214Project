//
// Created by janine on 2020/11/02.
//

#include <string>
#ifndef COS214PROJECT_RACEWEEKEND_H
#define COS214PROJECT_RACEWEEKEND_H

struct Date {
    int d, m, y;
};

class RaceWeekend{
public:
    RaceWeekend(int day, int month, int year, std::string location, std::string trackName);
    void setDate(int day, int month, int year);
    Date* getDate();
    void setLocation(std::string location);
    std::string getLocation();
    void setName(std::string trackName);
    std::string getName();
    int daysBetween(Date* date1, Date* date2);
    int countLeapYears(Date* date);
private:
    Date* date;
    std::string location;
    std::string trackName;
};

#endif //COS214PROJECT_RACEWEEKEND_H
