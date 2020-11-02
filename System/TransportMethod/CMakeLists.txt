file(GLOB TransportSources
        "*.h"
        "*.cpp"
        )

set(TRANSPORT_SOURCES ${TransportSources})
add_library(TRANSPORT ${TRANSPORT_SOURCES})