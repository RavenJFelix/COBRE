cmake_minimum_required(VERSION 3.16.1 FATAL_ERROR)

set(dir_src
	Canvas.cpp)

list(TRANSFORM dir_src PREPEND ${CMAKE_CURRENT_SOURCE_DIR}/)

set(cobre_sources
	${cobre_sources}
	${dir_src}
	PARENT_SCOPE)
