cmake_minimum_required(VERSION 3.16)
project(COS214Project)

set(CMAKE_CXX_STANDARD 14)

add_executable(COS214Project System/main.cpp System/TeamManager/Manager.cpp System/TeamManager/Manager.h System/TeamManager/TeamManager.cpp System/TeamManager/TeamManager.h System/TeamManager/Commands/StrategyCommand.cpp System/TeamManager/Commands/StrategyCommand.h System/TeamManager/Commands/LogisticsCommand.cpp System/TeamManager/Commands/LogisticsCommand.h System/TeamManager/Commands/EngineeringCommand.cpp System/TeamManager/Commands/EngineeringCommand.h System/TeamManager/Commands/RacingCommand.cpp System/TeamManager/Commands/RacingCommand.h)