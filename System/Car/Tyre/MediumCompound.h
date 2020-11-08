//
// Created by Ivan on 2020/11/01.
//

#ifndef COS214PROJECT_MEDIUMCOMPOUND_H
#define COS214PROJECT_MEDIUMCOMPOUND_H

#include "Compound.h"
#include "HardCompound.h"

/**
 * The Medium Compound acts as a Concrete State for the Tyre class.
 * Changing the State from a MediumCompound will set it to a HardCompound
 */

class MediumCompound: public Compound {
public:
    void handleChange(Tyre* t); ///Changes the State to HardCompound
    string getCompound(); ///Returns a string indicating that the current State is a Medium Compound
};


#endif //COS214PROJECT_MEDIUMCOMPOUND_H
