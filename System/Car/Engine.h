//
// Created by bieldt on 2020/10/31.
//

#ifndef COS214PROJECT_ENGINE_H
#define COS214PROJECT_ENGINE_H

#include "Component.h"

class Engine: public Component{
private:
public:
    Engine();
    Engine(Engine* c);
    ~Engine();
    bool test();
    Component* clone();

};
#endif //COS214PROJECT_ENGINE_H
