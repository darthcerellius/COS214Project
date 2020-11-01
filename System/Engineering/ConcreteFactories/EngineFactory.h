//
// Created by hannes on 2020/10/31.
//

#ifndef COS214PROJECT_ENGINEFACTORY_H
#define COS214PROJECT_ENGINEFACTORY_H

#include "../Factory.h"
#include "../../Car/Engine.h"

class EngineFactory : public Factory {
public:
    Engine* constructComponent() override;
};


#endif //COS214PROJECT_ENGINEFACTORY_H
