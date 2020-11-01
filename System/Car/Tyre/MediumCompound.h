//
// Created by Ivan on 2020/11/01.
//

#ifndef COS214PROJECT_MEDIUMCOMPOUND_H
#define COS214PROJECT_MEDIUMCOMPOUND_H

#include "Compound.h"
#include "HardCompound.h"

class MediumCompound: public Compound {
public:
    void handleChange(Tyre* t);
    string getCompound();
};


#endif //COS214PROJECT_MEDIUMCOMPOUND_H
