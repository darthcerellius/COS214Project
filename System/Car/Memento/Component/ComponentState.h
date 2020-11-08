//
// Created by jeanre on 2020/11/02.
//

#ifndef COS214PROJECT_COMPONENTSTATE_H
#define COS214PROJECT_COMPONENTSTATE_H

#include <string>

class ComponentCaretaker;
class ComponentState {

public:
    ComponentState(std::string);
    virtual ~ComponentState();
     std::string getName();


protected:
    std::string name;

    virtual void setName(std::string)=0;
};


#endif //COS214PROJECT_COMPONENTSTATE_H
