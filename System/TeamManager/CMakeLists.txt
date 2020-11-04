file(GLOB TeamManagerSources
        "*.h"
        "*.cpp"
        "Commands/*.cpp"
        "Commands/*.h"
        "Builder/*.h"
        "Builder/*.cpp"
        )

set(TEAMMANAGER_SOURCES ${TeamManagerSources})
add_library(TEAMMANAGER ${TEAMMANAGER_SOURCES})