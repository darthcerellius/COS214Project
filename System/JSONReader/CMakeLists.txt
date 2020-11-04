file(GLOB JSONReaderSources
        "*.h"
        "*.cpp"
        "Iterators/*.h"
        "Iterators/*.cpp"
        )

set(JSONREADER_SOURCES ${JSONReaderSources})
add_library(JSONREADER ${JSONREADER_SOURCES})