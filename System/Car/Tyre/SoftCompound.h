//
// Created by Ivan on 2020/11/01.
//

#ifndef COS214PROJECT_SOFTCOMPOUND_H
#define COS214PROJECT_SOFTCOMPOUND_H

#include "Compound.h"
#include "MediumCompound.h"

/**
 * @brief The Soft Compound acts as the starting Concrete State for the Tyre class.
 * Changing the State from a SoftCompound will set it to a MediumCompound
 */

class SoftCompound: public Compound {
public:
    void handleChange(Tyre* t); ///Changes the State to MediumCompound
    string getCompound(); ///Returns a string indicating that the current State is a Soft Compound
};


#endif //COS214PROJECT_SOFTCOMPOUND_H
