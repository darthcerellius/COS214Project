//
// Created by bieldt on 2020/10/31.
//

#include "Engine.h"

Engine::Engine() : Component("engine"){

}

Engine::Engine(Engine *c) :Component("engine"){

}

Engine::~Engine() {

}
//TODO implementation
bool Engine::test() {
    int testResult = rand()%10;
    if(testResult == 0){
        return false;//test failed
    }else{
        return true;
    }
}

Component *Engine::clone() {
    return dynamic_cast<Component*>(new Engine(this));
}
