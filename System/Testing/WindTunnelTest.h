//
// Created by jeanre on 2020/11/06.
//

#ifndef COS214PROJECT_WINDTUNNELTEST_H
#define COS214PROJECT_WINDTUNNELTEST_H
#include "cmath"
#include "Testing.h"
class WindTunnelTest : public Testing {
private:
    bool test();
public:
    bool test(Component *);
};


#endif //COS214PROJECT_WINDTUNNELTEST_H
