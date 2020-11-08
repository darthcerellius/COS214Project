//
// Created by janine on 2020/11/02.
//

#include <string>
#ifndef COS214PROJECT_RACEWEEKEND_H
#define COS214PROJECT_RACEWEEKEND_H

/** @brief Class to construct a race weekend.

    The race weekend class holds the details of each a track that will be used for a race.
    It includes the track name, location (continent) as well as the length of a track in km.
    The date and weather conditions for the track is stored in structs.
    @author COS214 project group-TaskFailedSuccessfully
    @date November 2020
    */

/** struct that holds date of the race weekend
    d = day of date
    m = month of date
    year = year of date
 */
struct Date {
    int d, m, y;
};

/** struct that holds the weather conditions of the race weekend */
struct Conditions {
    std::string weather;
    double temperature;
    double humidity;
};

class RaceWeekend{
public:
    /** constructor to initialise all variables  of the race weekend */
    RaceWeekend(std::string _trackName, double _length, std::string _location, Date* _date, Conditions* _condis);
    /** default destructor */
    ~RaceWeekend();
    /** setter for the track name variable */
    void setName(std::string _trackName);
    /** getter for the track name variable
        @return string trackName */
    std::string getName();
    /** setter for the track length variable */
    void setLength(double _length);
    /** getter for the track length variable
        @return double length */
    double getLength();
    /** setter for the location name variable */
    void setLocation(std::string _location);
    /** getter for the location name variable
        @return string location */
    std::string getLocation();
    /** setter for the date variable */
    void setDate(Date* _date);
    /** getter for the date variable
        @return Date* date */
    Date* getDate();
    /** setter for the condis variable */
    void setCondis(Conditions* _condis);
    /** getter for the condis variable
        @return Condition* condis */
    Conditions* getCondis();
    /** Function to calculate difference, in days, between 2 dates
    @param date1 first parameter
    @param date2 second parameter
    @return int (num2 - num1)
    */
    static int daysBetween(Date* date1, Date* date2);
    /** Function to calculate difference, in days, between 2 dates
    @param date first parameter
    @return int years/4 - years/100 + years/400
    */
    static int countLeapYears(Date* date);
private:
    std::string trackName; /** name of track */
    double length; /** length in km of track */
    std::string location; /** location of track (continent) */
    Date* date; /** pointer to date struct */
    Conditions* condis; /** pointer to  conditions struct*/
};

#endif //COS214PROJECT_RACEWEEKEND_H
