//
// Created by jeanre on 2020/11/02.
//

#ifndef COS214PROJECT_COMPONENTSTATE_H
#define COS214PROJECT_COMPONENTSTATE_H

#include <string>
class ComponentState {
private:
    double weight;
    double strength;
    std::string name;

public:
    ComponentState();
    ComponentState(double,double,std::string);
    ~ComponentState();
    double getWeight();
    double getStrength();
    std::string getName();
    void setWeight(double);
    void setStrength(double);
    void setName(std::string);
};


#endif //COS214PROJECT_COMPONENTSTATE_H
