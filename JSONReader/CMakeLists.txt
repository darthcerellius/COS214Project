file(GLOB JSONReaderSources
        "*.h"
        "*.cpp"
        )

set(JSONREADER_SOURCES ${JSONReaderSources})
add_library(JSONREADER ${JSONREADER_SOURCES})