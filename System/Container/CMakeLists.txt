file(GLOB ContainerSources
        "*.h"
        "*.cpp"
        )

set(CONTAINER_SOURCES ${ContainerSources})
add_library(CONTAINER ${CONTAINER_SOURCES})