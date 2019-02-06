cmake_minimum_required(VERSION 3.11)
project(minizip)

set(MINIZIP_SOURCE_FILES
	ioapi.h
    ioapi.c
    mztools.h
    mztools.c
    unzip.h
    unzip.c
    zip.h
    zip.c
    error.h
    error.cpp mzexport.h)

if (WIN32)
	set(MINIZIP_SOURCE_FILES ${MINIZIP_SOURCE_FILES} iowin32.c)
endif()

add_library(Minizip ${MINIZIP_SOURCE_FILES})

set_target_properties(Minizip PROPERTIES DEFINE_SYMBOL "MZ_BUILDING_MZ")

target_link_libraries(Minizip
	PUBLIC
	z ${CoreFoundation}
	PRIVATE
	${version_rc}
	)

set(MINIZIPTESTS_SOURCE_FILES
	minizip.c)

add_executable(MinizipTests ${MINIZIPTESTS_SOURCE_FILES})

target_link_libraries(MinizipTests Minizip)

