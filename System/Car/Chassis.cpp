//
// Created by bieldt on 2020/10/31.
//

#include "Chassis.h"

Chassis::Chassis():Component("chassis") {

}
Chassis::Chassis(Chassis *c): Component("chassis") {

}
Chassis::~Chassis() {

}
//TODO implementation
bool Chassis::test() {
    int testResult = rand()%10;
    if(testResult == 0){
        return false;//test failed
    }else{
        return true;
    }
}

Component *Chassis::clone() {
    return dynamic_cast<Component*>(new Chassis(this));
}


