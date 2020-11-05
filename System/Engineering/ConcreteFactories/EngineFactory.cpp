//
// Created by hannes on 2020/10/31.
//

#include <iostream>
#include "EngineFactory.h"

using namespace std;

Engine *EngineFactory::constructComponent() {
    cout<<"Engineering: Engine constructed"<<endl;
    return new Engine();
}
