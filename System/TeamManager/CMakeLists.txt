file(GLOB TeamManagerSources
        "*.h"
        "*.cpp"
        "Commands/*.cpp"
        "Commands/*.h"
        )

set(TEAMMANAGER_SOURCES ${TeamManagerSources})
add_library(TEAMMANAGER ${TEAMMANAGER_SOURCES})