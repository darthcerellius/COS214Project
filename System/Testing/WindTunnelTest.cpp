//
// Created by jeanre on 2020/11/06.
//

#include "WindTunnelTest.h"

bool WindTunnelTest::test(Component * component) {
    tokens-=20;
    return component->windTunnelTest(0);
}

WindTunnelTest::WindTunnelTest() {
    tokens=400;
}
