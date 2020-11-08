//
// Created by hannes on 2020/10/31.
//

#ifndef COS214PROJECT_CHASSISFACTORY_H
#define COS214PROJECT_CHASSISFACTORY_H

#include "../Factory.h"
#include "../../Car/Chassis.h"
/**
 * @brief Constructs the Chassis component
 */
class ChassisFactory : public Factory{
public:
    Chassis* constructComponent() override;
};


#endif //COS214PROJECT_CHASSISFACTORY_H
