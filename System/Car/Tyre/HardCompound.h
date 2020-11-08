//
// Created by Ivan on 2020/11/01.
//

#ifndef COS214PROJECT_HARDCOMPOUND_H
#define COS214PROJECT_HARDCOMPOUND_H

#include "Compound.h"
#include "SoftCompound.h"

/**
 * The Hard Compound acts as a Concrete State for the Tyre class.
 * Changing the State from a HardCompound will set it back to a SoftCompound
 */

class HardCompound: public Compound {
public:
    void handleChange(Tyre* t); ///Changes the State to SoftCompound
    string getCompound(); ///Returns a string indicating that the current State is a Hard Compound
};


#endif //COS214PROJECT_HARDCOMPOUND_H
