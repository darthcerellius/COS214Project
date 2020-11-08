//
// Created by jeanre on 2020/11/06.
//

#include "WindTunnelTest.h"

bool WindTunnelTest::test(Component * component) {
    if(tokens<1){
        std::cout<<"Already ran all 400 wind tunnel tests" << std::endl << std::endl;
    }
    return component->windTunnelTest(tokens);
}

WindTunnelTest::WindTunnelTest() {
    tokens=400;
}
