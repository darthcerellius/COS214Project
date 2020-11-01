//
// Created by Ivan on 2020/11/01.
//

#include "Supplier.h"

Supplier::Supplier() {

}

Supplier::~Supplier() {

}

Component* Supplier::supply() {
    return supplyComponent();
}