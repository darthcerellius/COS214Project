//
// Created by jeanre on 2020/11/02.
//

#ifndef COS214PROJECT_COMPONENTSTATE_H
#define COS214PROJECT_COMPONENTSTATE_H
/**
 * @brief Serves as the abstract class for the other states, such that one caretaker can manage all other component states
 */
#include <string>

class ComponentCareTaker;
class ComponentState {

public:
    /**
     *
     * @param name -  Name of type of component
     */
    ComponentState(std::string name) ;
    virtual ~ComponentState();
    /**
     *
     * @return name of type of component
     */
     std::string getName();


protected:
    std::string name; ///the name of the type of component

    virtual void setName(std::string)=0;
};


#endif //COS214PROJECT_COMPONENTSTATE_H
