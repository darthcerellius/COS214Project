file(GLOB CarSources
        "*.h"
        "*.cpp"
        "Tyre/*.cpp"
        "Tyre/*.h"
        "Memento/Car/*.h"
        "Memento/Car/*.cpp"
        "Memento/Component/*.h"
        "Memento/Component/*.cpp"
        )

set(CAR_SOURCES ${CarSources})
add_library(CAR ${CAR_SOURCES})