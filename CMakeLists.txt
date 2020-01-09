CMAKE_MINIMUM_REQUIRED(VERSION 3.16.1 FATAL_ERROR)

PROJECT(cobre VERSION 0.0.0.0)
SET(cobre_sources)
SET(cobre_headers)

add_library(${PROJECT_NAME} ${cobre_headers} ${cobre_sources})


