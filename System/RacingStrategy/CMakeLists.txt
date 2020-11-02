file(GLOB RacingStrategySources
        "*.h"
        "*.cpp"
        "PitCrew/*.cpp"
        "PitCrew/*.h"
        "PitCrew/Instructions/*.h"
        "PitCrew/Instructions/*.cpp"
        "PitCrew/RaceEvents/*.h"
        "PitCrew/RaceEvents/*.cpp"
        "Strategies/*.h"
        "Strategies/*.cpp"
        )

set(RACINGSTRATEGY_SOURCES ${RacingStrategySources})
add_library(RACINGSTRATEGY ${RACINGSTRATEGY_SOURCES})