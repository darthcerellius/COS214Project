//
// Created by hannes on 2020/10/31.
//

#ifndef COS214PROJECT_FACTORY_H
#define COS214PROJECT_FACTORY_H

#include "../Car/Component.h"

class Factory {
public:
    virtual Component* constructComponent()=0;
};


#endif //COS214PROJECT_FACTORY_H
