file(GLOB RacingSources
        "*.h"
        "*.cpp"
        )

set(RACING_SOURCES ${RacingSources})
add_library(RACING ${RACING_SOURCES})