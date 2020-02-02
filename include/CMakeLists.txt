cmake_minimum_required(VERSION 3.16.1 FATAL_ERROR)

set(dir_headers
	Canvas.h
        CobreDef.h
        Gelement.h
	Pair2D.h
	Pixel.h
	PixelBuffer.h
	Rengine.h)
		
list(TRANSFORM dir_headers PREPEND ${CMAKE_CURRENT_SOURCE_DIR}/)

set(cobre_headers
	${cobre_headers}
	${dir_headers}
	PARENT_SCOPE)
