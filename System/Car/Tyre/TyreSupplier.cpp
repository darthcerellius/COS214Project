//
// Created by Ivan on 2020/11/01.
//

#include "TyreSupplier.h"
TyreSupplier::TyreSupplier() {

}

TyreSupplier::~TyreSupplier() {

}

Component* TyreSupplier::supplyComponent() {
    Compound* comp = new SoftCompound();
    Component* t = new Tyre(comp);
    return t;
}