//
// Created by Ivan on 2020/11/01.
//

#ifndef COS214PROJECT_HARDCOMPOUND_H
#define COS214PROJECT_HARDCOMPOUND_H

#include "Compound.h"
#include "SoftCompound.h"

class HardCompound: public Compound {
public:
    void handleChange(Tyre* t);
    string getCompound();
};


#endif //COS214PROJECT_HARDCOMPOUND_H
