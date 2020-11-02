file(GLOB MementoSources
        "Car/*.h"
        "Car/*.cpp"
        "Component/*.h"
        "Component/*.cpp"
        )

set(MEMENTO_SOURCES ${MementoSources})
add_library(MEMENTO ${MEMENTO_SOURCES})