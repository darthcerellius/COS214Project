file(GLOB TestingSources
        "*.h"
        "*.cpp"
        )

set(TESTING_SOURCES ${TestingSources})
add_library(TESTING ${TESTING_SOURCES})