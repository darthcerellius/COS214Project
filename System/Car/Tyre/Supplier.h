//
// Created by Ivan on 2020/11/01.
//

#ifndef MAIN_CPP_SUPPLIER_H
#define MAIN_CPP_SUPPLIER_H
#include "Tyre.h"

class Supplier {
public:
    Supplier();
    ~Supplier();
    Component* supply();

protected:
    virtual Component* supplyComponent() = 0;
};


#endif //MAIN_CPP_SUPPLIER_H
