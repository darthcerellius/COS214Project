file(GLOB ContainerSources
        "*.h"
        "*.cpp"
        "Memento/*.h"
        "Memento/*.cpp"
        )

set(CONTAINER_SOURCES ${ContainerSources})
add_library(CONTAINER ${CONTAINER_SOURCES})