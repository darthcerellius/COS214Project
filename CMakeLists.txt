cmake_minimum_required(VERSION 3.16)
project(COS214Project)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory("${PROJECT_SOURCE_DIR}/System/TeamManager")
add_subdirectory("${PROJECT_SOURCE_DIR}/System/TransportMethod")
add_subdirectory("${PROJECT_SOURCE_DIR}/System/Calendar")
add_subdirectory("${PROJECT_SOURCE_DIR}/System/Car")
add_subdirectory("${PROJECT_SOURCE_DIR}/System/Engineering")
add_subdirectory("${PROJECT_SOURCE_DIR}/System/Container")
add_subdirectory("${PROJECT_SOURCE_DIR}/System/RacingStrategy")
add_subdirectory("${PROJECT_SOURCE_DIR}/System/JSONReader")
add_subdirectory("${PROJECT_SOURCE_DIR}/System/Racing")
add_subdirectory("${PROJECT_SOURCE_DIR}/System/Testing")
add_subdirectory("${PROJECT_SOURCE_DIR}/System/Simulation")


set(SOURCES
        ${TEAMMANAGER_SOURCES}
        ${CAR_SOURCES}
        ${TRANSPORT_SOURCES}
        ${CALENDAR_SOURCES}
        ${ENGINEERING_SOURCES}
        ${CONTAINER_SOURCES}
        ${RACINGSTRATEGY_SOURCES}
        ${JSONREADER_SOURCES}
        ${SIMULATION_SOURCES}
        ${TESTING_SOURCES}
        ${RACING_SOURCES}

        )

add_executable(COS214Project System/main.cpp ${SOURCES})

target_link_libraries(COS214Project
        TEAMMANAGER
        TESTING
        SIMULATION
        CALENDAR
        RACING
        ENGINEERING
        TRANSPORT
        CAR
        CONTAINER
        RACINGSTRATEGY
        JSONREADER

        )

