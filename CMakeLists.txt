CMAKE_MINIMUM_REQUIRED(VERSION 3.16.1 FATAL_ERROR)

PROJECT(cobre VERSION 0.0.0.0)
SET(cobre_sources)
SET(cobre_headers)

target_include_directories(include)
add_executable(${PROJECT_NAME} ${cobre_headers} ${cobre_sources})



