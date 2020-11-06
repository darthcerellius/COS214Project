//
// Created by jeanre on 2020/11/06.
//

#ifndef COS214PROJECT_SOFTWARETEST_H
#define COS214PROJECT_SOFTWARETEST_H

#include "Testing.h"
class SoftwareTest : public Testing{
private:


public:
    SoftwareTest();
    bool test(Component *) ;
 };


#endif //COS214PROJECT_SOFTWARETEST_H
