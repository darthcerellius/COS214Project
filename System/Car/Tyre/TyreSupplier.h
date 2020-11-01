//
// Created by Ivan on 2020/11/01.
//

#ifndef MAIN_CPP_TYRESUPPLIER_H
#define MAIN_CPP_TYRESUPPLIER_H
#include "Supplier.h"
#include "Tyre.h"
#include "SoftCompound.h"

class TyreSupplier: public Supplier {
public:
    TyreSupplier();
    ~TyreSupplier();
    Component* supplyComponent();
};


#endif //MAIN_CPP_TYRESUPPLIER_H
