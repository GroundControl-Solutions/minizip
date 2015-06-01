cmake_minimum_required(VERSION 3.1)
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
    error.c)

if (WIN32)
	set(MINIZIP_SOURCE_FILES ${MINIZIP_SOURCE_FILES} iowin32.c)
endif()

add_library(Minizip ${MINIZIP_SOURCE_FILES})

target_link_libraries(Minizip z CFExtension ${CoreFoundation})

set(MINIZIPTESTS_SOURCE_FILES
	minizip.c)

add_executable(MinizipTests ${MINIZIPTESTS_SOURCE_FILES})

target_link_libraries(MinizipTests Minizip)

