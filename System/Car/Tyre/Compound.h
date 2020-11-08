//
// Created by Ivan on 2020/11/01.
//

#ifndef COS214PROJECT_COMPOUND_H
#define COS214PROJECT_COMPOUND_H
#include "Tyre.h"

/**
 * The Compound represents the current State of the Tyre. It can be one of three types: Soft, Medium or Hard.
 */

class Tyre;

class Compound {
public:
    Compound();
    virtual ~Compound();
    virtual void handleChange(Tyre* t) = 0;
    virtual string getCompound() = 0;
};


#endif //COS214PROJECT_COMPOUND_H
