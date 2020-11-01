//
// Created by jeanre on 2020/11/01.
//

#ifndef COS214PROJECT_TESTER_H
#define COS214PROJECT_TESTER_H

/**
 * @author Jeanre du Plessis
 * @version 1.0.0
 *
 */
#include "../Car/Component.h"
class Tester {
protected:
    virtual bool testComponent(Component*)=0;
    void reset();
};
#endif //COS214PROJECT_TESTER_H
