//
// Created by Ivan on 2020/11/01.
//

#ifndef MAIN_CPP_SUPPLIER_H
#define MAIN_CPP_SUPPLIER_H
#include "Tyre.h"

/**
 * @brief The Supplier is the Creator of the Tyre component, and acts as parent to the TyreSupplier Concrete Creator in this Factory Pattern
 */

class Supplier {
public:
    Supplier();
    ~Supplier();
    Component* supply(); ///Returns the supplyComponent() pure-virtual function

protected:
    virtual Component* supplyComponent() = 0;
};


#endif //MAIN_CPP_SUPPLIER_H
