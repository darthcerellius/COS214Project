//
// Created by hannes on 2020/10/31.
//

#include <iostream>
#include "ChassisFactory.h"

using namespace std;

Chassis *ChassisFactory::constructComponent() {

    cout<<"Engineering: Chassis constructed"<<endl;
    return new Chassis();
}
