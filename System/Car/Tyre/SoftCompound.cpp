//
// Created by Ivan on 2020/11/01.
//

#include "SoftCompound.h"

void SoftCompound::handleChange(Tyre *t) {
    t->setState(new MediumCompound());
}

string SoftCompound::getCompound() {
    return "Soft Compound";
}
