# Specify the minimum version for CMake
cmake_minimum_required(VERSION 3.0)

# Project's name
project(Unity_Unit_Test_FW_Test)

# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)

#set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
#set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

set(INCLUDE_PATH ${PROJECT_SOURCE_DIR}/core_logic/inc
                 ${PROJECT_SOURCE_DIR}/unity/inc
                 ${PROJECT_SOURCE_DIR}/unit_test/inc
)

# The following folder will be included
include_directories("${INCLUDE_PATH}")

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

#SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

#option(WITH_INTEGER "Option description" OFF)
#option(WITH_STRING "Option description" OFF)

#set(LIBRARIES -pthread -lboost_system)

if(APPLE)
#    set(ADDITIONAL_LIBRARIES -lboost_thread-mt)
else (UNIX AND NOT APPLE)
#    set(ADDITIONAL_LIBRARIES -lboost_thread)
endif()


add_executable(unit_test ./core_logic/src/math_logic.c
./unity/src/unity.c
./unit_test/src/test_math_logic.c
./unit_test/src/test_runner_math_logic.c
                   ${INCLUDE}
                   )

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11 -Wall -Wextra")

