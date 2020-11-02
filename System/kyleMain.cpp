//
// Created by kyle-pc on 2020/11/02.
//

#include <iostream>
#include "TransportMethod/TransportMethod.h"
#include "TransportMethod/AirTransport.h"
#include "TransportMethod/RoadTransport.h"
#include "TransportMethod/SeaTransport.h"


using namespace std;
int main() {
    SeaTransport * method = new SeaTransport();
    method->load(nullptr);
}