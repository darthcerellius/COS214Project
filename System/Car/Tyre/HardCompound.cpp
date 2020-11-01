//
// Created by Ivan on 2020/11/01.
//

#include "HardCompound.h"

void HardCompound::handleChange(Tyre *t) {
    t->setState(new SoftCompound());
}

string HardCompound::getCompound() {
    return "Hard Compound";
}
