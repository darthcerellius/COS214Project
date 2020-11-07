//
// Created by jeanre on 2020/11/02.
//

#ifndef COS214PROJECT_CARSTATE_H
#define COS214PROJECT_CARSTATE_H


#include "../../Component.h"
#include "../../../RacingStrategy/Strategies/GeneralRaceStrategy.h"
#include <map>
#include <string>
class CarState {
private:
    std::string carName;
    std::string name;
    map<std::string,Component*> components;
    GeneralRaceStrategy* strategy;
    double weight;
    double strength;
    double windResistance;
    double downForce;
public:
    ~CarState();
    CarState();
    CarState(std::string, std::string, map<std::string, Component*>,GeneralRaceStrategy*, double , double);
    map<std::string, Component*> getComponents();
    void setComponents(map<std::string,Component*>);
    std::string getName();
    void setName(std::string);
    void setCarName(std::string);
    std::string getCarName();
    void setWindResistance(double );
    double getWindResistance();
    double getDownForce();
    void setDownForce(double);
    void setStrategy(GeneralRaceStrategy*);
    GeneralRaceStrategy* getStrategy();





};




#endif //COS214PROJECT_CARSTATE_H
