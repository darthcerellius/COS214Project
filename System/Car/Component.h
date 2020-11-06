//
// Created by bieldt on 2020/10/31.
//

#ifndef COS214PROJECT_COMPONENT_H
#define COS214PROJECT_COMPONENT_H
#include <string>

//#include "../Memento/Component/ComponentCareTaker.h"
class ComponentCareTaker;
using namespace std;
class Component{
public:
    Component(string name);
    virtual ~Component();
    string getName();
    virtual void add(Component* c);
    virtual void remove(string c);
    virtual bool test() = 0;
    virtual Component* clone() = 0;

private:
    string name;


};




#endif //COS214PROJECT_COMPONENT_H
