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
#include "JSONReader/JSONObjectHolder.h"


using namespace std;
int main() {
    SeaTransport * method = new SeaTransport();
    method->load(nullptr);
    std::ifstream t("../Data/raceweekends.json");
    std::string str((std::istreambuf_iterator<char>(t)),
                    std::istreambuf_iterator<char>());
    str.erase(str.begin());
    JSONObjectHolder root(str);
    //std::cout << (std::string)root["hello"]["world"]["me"] << std::endl;
    for (auto& val : dynamic_cast<JSONObjectHolder&>(root)) {
        std::cout << (std::string)val["conditions"]["weather"] << std::endl;
    }
    //std::cout << (int)root["quiz"]["maths"]["q1"]["options"][3] << std::endl;

}