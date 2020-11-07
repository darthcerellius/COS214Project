//
// Created by kyle-pc on 2020/11/07.
//

#include "ServiceLogisticCommand.h"

void ServiceLogisticCommand::execute(Car *c) {
    std::cout << "Transporting car to Engineering department..." << std::endl;
    if (successor != nullptr) {
        successor->execute(c);
    }
}
