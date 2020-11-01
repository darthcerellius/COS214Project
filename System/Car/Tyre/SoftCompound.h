//
// Created by Ivan on 2020/11/01.
//

#ifndef COS214PROJECT_SOFTCOMPOUND_H
#define COS214PROJECT_SOFTCOMPOUND_H

#include "Compound.h"
#include "MediumCompound.h"

class SoftCompound: public Compound {
public:
    virtual void handleChange(Tyre* t);
    virtual string getCompound();
};


#endif //COS214PROJECT_SOFTCOMPOUND_H
