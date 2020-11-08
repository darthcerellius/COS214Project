//
// Created by jeanre on 2020/11/06.
//

#ifndef COS214PROJECT_SOFTWARETEST_H
#define COS214PROJECT_SOFTWARETEST_H

#include "Testing.h"
class SoftwareTest : public Testing{

public:

    SoftwareTest(); ///Default constructor
    /**
     * Calls software test function of passed in component
     *
     * @param c a component that will have it's software test function called
     * @return will return true if software test is passed and  false if software test is failed
     */
    bool test(Component * c) ;
 };


#endif //COS214PROJECT_SOFTWARETEST_H
