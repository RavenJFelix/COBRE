CMAKE_MINIMUM_REQUIRED(VERSION 3.16.1 FATAL_ERROR)

PROJECT(cobre VERSION 0.0.0.0)
SET(cobre_sources)
SET(cobre_headers)

add_subdirectory(src)
add_subdirectory(include)
message(STATUS ${cobre_headers})
add_library(cobre ${cobre_sources} ${cobre_headers})
target_include_directories(cobre PUBLIC include)
