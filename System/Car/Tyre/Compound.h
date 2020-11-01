//
// Created by Ivan on 2020/11/01.
//

#ifndef COS214PROJECT_COMPOUND_H
#define COS214PROJECT_COMPOUND_H
#include "Tyre.h"


class Compound {
public:
    Compound();
    ~Compound();
    virtual void handleChange(Tyre* t) = 0;
    virtual string getCompound() = 0;
};


#endif //COS214PROJECT_COMPOUND_H
