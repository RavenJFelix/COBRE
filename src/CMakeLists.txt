cmake_minimum_required(VERSION 3.16.1 FATAL_ERROR)

add_subdirectory(core)
add_subdirectory(main)
set(cobre_sources
	${cobre_sources}
	PARENT_SCOPE)

