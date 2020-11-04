//
// Created by kyle-pc on 2020/11/02.
//

#include <iostream>
#include <fstream>
#include "TransportMethod/TransportMethod.h"
#include "TransportMethod/AirTransport.h"
#include "TransportMethod/RoadTransport.h"
#include "TransportMethod/SeaTransport.h"
#include "JSONReader/JSONRoot.h"


using namespace std;
int main() {
    SeaTransport * method = new SeaTransport();
    method->load(nullptr);
    std::ifstream t("../Data/test.json");
    std::string str((std::istreambuf_iterator<char>(t)),
                    std::istreambuf_iterator<char>());
    JSONRoot root(str);
    //std::cout << (std::string)root["hello"]["world"]["me"] << std::endl;
    for (auto val : dynamic_cast<JSONRoot&>(root["quiz"]["maths"])) {
        std::cout << val.first << std::endl;
    }
    std::cout << (int)root["quiz"]["maths"]["q1"]["options"][3] << std::endl;

}