//
// Created by Ivan on 2020/11/01.
//

#include "MediumCompound.h"

void MediumCompound::handleChange(Tyre *t) {
    t->setState(new HardCompound());
}

string MediumCompound::getCompound() {
    return "Medium Compound";
}