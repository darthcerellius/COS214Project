//
// Created by jeanre on 2020/11/01.
//

#ifndef COS214PROJECT_SOFTWARE_H
#define COS214PROJECT_SOFTWARE_H

#include "Tester.h"
class Software : public Tester{
public:
    bool testComponent(Component *) override;
};


#endif //COS214PROJECT_SOFTWARE_H
