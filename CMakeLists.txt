cmake_minimum_required(VERSION 3.0)
SET(PROJ_NAME "sorting_algorithms")
PROJECT(${PROJ_NAME})


include_directories(${PROJECT_SOURCE_DIR})

file(GLOB source_files
    "*.h"
    "*.c"
    "common/*.c"
    "algorithms/*.c"
)

add_executable(${PROJ_NAME} ${source_files})