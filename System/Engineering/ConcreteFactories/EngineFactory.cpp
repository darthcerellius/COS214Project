//
// Created by hannes on 2020/10/31.
//

#include "EngineFactory.h"

Engine *EngineFactory::constructComponent() {
    return new Engine();
}
