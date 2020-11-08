//
// Created by jeanre on 2020/11/02.
//

#ifndef COS214PROJECT_COMPONENTSTATE_H
#define COS214PROJECT_COMPONENTSTATE_H
/**
 * @brief Serves as the abstract class for the other states, such that one caretaker can manage all other component states
 */
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
