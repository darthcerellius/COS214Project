file(GLOB EngineeringSources
        "*.h"
        "*.cpp"
        "ConcreteFactories/*.cpp"
        "ConcreteFactories/*.h"
        )

set(ENGINEERING_SOURCES ${EngineeringSources})
add_library(ENGINEERING ${ENGINEERING_SOURCES})