//
// Created by jeanre on 2020/11/01.
//

#ifndef COS214PROJECT_WINDTUNNEL_H
#define COS214PROJECT_WINDTUNNEL_H

#include "Tester.h"
class WindTunnel : public Tester{
public:
    bool testComponent(Component *) override;
};


#endif //COS214PROJECT_WINDTUNNEL_H
