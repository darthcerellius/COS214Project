file(GLOB SimulationSources
        "*.h"
        "*.cpp"
        )

set(SIMULATION_SOURCES ${SimulationSources})
add_library(SIMULATION ${SIMULATION_SOURCES})