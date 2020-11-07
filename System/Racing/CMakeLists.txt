file(GLOB RacingSources
        "*.h"
        "*.cpp"
        "Observers/*.h"
        "Observers/*.cpp"
        )

set(RACING_SOURCES ${RacingSources})
add_library(RACING ${RACING_SOURCES})