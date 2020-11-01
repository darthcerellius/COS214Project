//
// Created by Ivan on 2020/11/01.
//

#ifndef COS214PROJECT_MEDIUMCOMPOUND_H
#define COS214PROJECT_MEDIUMCOMPOUND_H

#include "Compound.h"
#include "HardCompound.h"

class MediumCompound: public Compound {
public:
    virtual void handleChange(Tyre* t);
    virtual string getCompound();
};


#endif //COS214PROJECT_MEDIUMCOMPOUND_H
