//
// Created by hannes on 2020/10/31.
//

#include <iostream>
#include "ElectronicsFactory.h"

using namespace std;

ElectronicsComponent *ElectronicsFactory::constructComponent() {
    cout<<"Engineering: ElectronicsComponent constructed"<<endl;
    return new ElectronicsComponent();
}
