cmake_minimum_required(VERSION 3.16)
project(COS214Project)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory("${PROJECT_SOURCE_DIR}/System/TransportMethod")
add_subdirectory("${PROJECT_SOURCE_DIR}/System/Calendar")
add_subdirectory("${PROJECT_SOURCE_DIR}/System/Car")
add_subdirectory("${PROJECT_SOURCE_DIR}/System/Engineering")
add_subdirectory("${PROJECT_SOURCE_DIR}/System/Memento")
add_subdirectory("${PROJECT_SOURCE_DIR}/System/Container")
add_subdirectory("${PROJECT_SOURCE_DIR}/System/RacingStrategy")
add_subdirectory("${PROJECT_SOURCE_DIR}/System/TeamManager")
add_subdirectory("${PROJECT_SOURCE_DIR}/System/JSONReader")
add_subdirectory("${PROJECT_SOURCE_DIR}/System/Racing")

set(SOURCES
        ${TRANSPORT_SOURCES}
        ${CALENDAR_SOURCES}
        ${CAR_SOURCES}
        ${ENGINEERING_SOURCES}
        ${MEMENTO_SOURCES}
        ${CONTAINER_SOURCES}
        ${RACINGSTRATEGY_SOURCES}
        ${TEAMMANAGER_SOURCES}
        ${JSONREADER_SOURCES}
        #${RACING_SOURCES}

        )

add_executable(COS214Project System/kyleMain.cpp ${SOURCES})

target_link_libraries(COS214Project
        TEAMMANAGER
        TRANSPORT
        CALENDAR
        ENGINEERING
        CAR
        MEMENTO
        CONTAINER
        RACINGSTRATEGY
        JSONREADER
        #RACING
        )