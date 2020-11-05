//
// Created by janine on 2020/11/02.
//

#include <string>
#ifndef COS214PROJECT_RACEWEEKEND_H
#define COS214PROJECT_RACEWEEKEND_H

struct Date {
    int d, m, y;
};

struct Conditions {
    std::string weather;
    double temperature;
    double humidity;
};

class RaceWeekend{
public:
    RaceWeekend(std::string _trackName, double _length, std::string _location, Date* _date, Conditions* _condis);
    void setName(std::string _trackName);
    std::string getName();
    void setLength(double _length);
    double getLength();
    void setLocation(std::string _location);
    std::string getLocation();
    void setDate(Date* _date);
    Date* getDate();
    void setCondis(Conditions* _condis);
    Conditions* getCondis();
    int daysBetween(Date* date1, Date* date2);
    int countLeapYears(Date* date);
private:
    std::string trackName;
    double length;
    std::string location;
    Date* date;
    Conditions* condis;
};

#endif //COS214PROJECT_RACEWEEKEND_H
