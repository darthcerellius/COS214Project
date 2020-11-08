//
// Created by jeanre on 2020/11/06.
//

#ifndef COS214PROJECT_WINDTUNNELTEST_H
#define COS214PROJECT_WINDTUNNELTEST_H
#include "cmath"
#include "Testing.h"
class WindTunnelTest : public Testing {
private:
    int tokens; ///The total amount of wind tunnel tests that can be performed during one season
public:
    WindTunnelTest();
    /**
     *
     * @param component a component that will have its wind tunnel test function called
     * @return will return true if wind tunnel test is passed and false if wind tunnel test is failed
     */
    bool test(Component * component);
};


#endif //COS214PROJECT_WINDTUNNELTEST_H
