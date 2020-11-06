file(GLOB MementoSources
        "Car/*.h"
        "Car/*.cpp"
        "Component/*.h"
        "Component/*.cpp"
        )

set(MEMENTO_SOURCES ${MementoSources} Component/ChassisAndAeroState.cpp Component/ChassisAndAeroState.h Component/EngineState.cpp Component/EngineState.h)
add_library(MEMENTO ${MEMENTO_SOURCES})