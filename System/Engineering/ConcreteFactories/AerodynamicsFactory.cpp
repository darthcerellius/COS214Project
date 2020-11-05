//
// Created by hannes on 2020/10/31.
//

#include <iostream>
#include "AerodynamicsFactory.h"

using namespace std;

AerodynamicsComponent *AerodynamicsFactory::constructComponent() {
    cout<<"Engineering: AerodynamicsComponent constructed"<<endl;
    return new AerodynamicsComponent("AerodynamicsComponent");
}
