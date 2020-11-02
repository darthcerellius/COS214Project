file(GLOB CarSources
        "*.h"
        "*.cpp"
        "Tyre/*.cpp"
        "Tyre/*.h"
        )

set(CAR_SOURCES ${CarSources})
add_library(CAR ${CAR_SOURCES})