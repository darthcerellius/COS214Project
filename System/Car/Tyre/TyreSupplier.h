//
// Created by Ivan on 2020/11/01.
//

#ifndef MAIN_CPP_TYRESUPPLIER_H
#define MAIN_CPP_TYRESUPPLIER_H
#include "Supplier.h"
#include "Tyre.h"
#include "SoftCompound.h"

/**
 * @brief The TyreSupplier is the provider of the Tyre component
 * TyreSupplier acts as the Concrete Creator in the Factory Pattern
 */

class TyreSupplier: public Supplier {
public:
    TyreSupplier();
    ~TyreSupplier();
    Component* supplyComponent();///Creates and returns the actual Tyre Component
};


#endif //MAIN_CPP_TYRESUPPLIER_H
