//
// Created by hannes on 2020/10/31.
//

#ifndef COS214PROJECT_FACTORY_H
#define COS214PROJECT_FACTORY_H

#include "../Car/Component.h"
/**
 * @brief Creator participant for the factory pattern used to construct components that should be added to car
 */
class Factory {
public:
    /**
     * @brief Method used by concrete creators to construct different components
     * @return Returns the constructed component
     */
    virtual Component* constructComponent()=0;
};


#endif //COS214PROJECT_FACTORY_H
