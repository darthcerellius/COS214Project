file(GLOB CalendarSources
        "*.h"
        "*.cpp"
        )

set(CALENDAR_SOURCES ${CalendarSources})
add_library(CALENDAR ${CALENDAR_SOURCES})