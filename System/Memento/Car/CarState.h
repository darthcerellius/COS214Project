//
// Created by jeanre on 2020/11/02.
//

#ifndef COS214PROJECT_CARSTATE_H
#define COS214PROJECT_CARSTATE_H


#include "../../Car/Car.h"
#include <string>
class CarState {
private:
public:
    CarState();
    CarState(std::string, map<std::string, Component*>,double,double, double , double);
    map<std::string, Component*> getComponents();
    void setComponents(map<std::string,Component*>);
    void setWeight(double);
    double getWeight(double);
    double getStrengt();
    void setStrength(double );
    std::string getName();
    void setName(std::string);





};


#endif //COS214PROJECT_CARSTATE_H
