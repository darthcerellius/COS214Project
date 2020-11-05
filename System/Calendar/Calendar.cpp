//
// Created by janine on 2020/11/02.
//

#include "Calendar.h"

Calendar::Calendar(){
    std::ifstream t("../Data/raceweekends.json");
    std::string str((std::istreambuf_iterator<char>(t)),
                    std::istreambuf_iterator<char>());
    str.erase(str.begin());
    JSONObjectHolder ObjectHolder(str);
    //std::cout << (std::string)root["hello"]["world"]["me"] << std::endl;
    for (auto &val : dynamic_cast<JSONObjectHolder&>(ObjectHolder)) {
        std::string newTrack = (std::string)val["track"];
        double newLength = (double)val["length"];
        std::string newLocation = (std::string)val["continent"];
        Date* newDate = new Date();
        newDate->d = (int)val["date"]["day"];
        newDate->m = (int)val["date"]["month"];
        newDate->y = (int)val["date"]["year"];

        Conditions* newCondi = new Conditions();
        newCondi->weather = (std::string)val["conditions"]["weather"];
        newCondi->temperature = (double)val["conditions"]["temperature"];
        newCondi->humidity = (double)val["conditions"]["humidity"];

        RaceWeekend* newWeekend = new RaceWeekend(newTrack, newLength, newLocation, newDate, newCondi);

        weekends.push_back(newWeekend);
    }
}