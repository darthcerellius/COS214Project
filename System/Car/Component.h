//
// Created by bieldt on 2020/10/31.
//

#ifndef COS214PROJECT_COMPONENT_H
#define COS214PROJECT_COMPONENT_H
#include <string>
using namespace std;
class Component{
public:
    Component(string name);
    string getName();
    virtual void add(Component* c)=0;
    virtual void remove(string c) = 0;
    virtual bool test() = 0;
    virtual Component* clone() = 0;
private:
    string name;
};
#endif //COS214PROJECT_COMPONENT_H
