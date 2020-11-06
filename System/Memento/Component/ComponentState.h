//
// Created by jeanre on 2020/11/02.
//

#ifndef COS214PROJECT_COMPONENTSTATE_H
#define COS214PROJECT_COMPONENTSTATE_H

#include <string>
class ComponentState {
private:
    std::string name;

public:
    ComponentState(std::string);
    ~ComponentState();
     std::string getName();
    void setName(std::string);
};


#endif //COS214PROJECT_COMPONENTSTATE_H
