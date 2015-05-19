cmake_minimum_required(VERSION 3.1)
project(minizip)

set(MINIZIP_SOURCE_FILES
    ioapi.c
    minizip.c
    mztools.c
    unzip.c
    zip.c
    )

if (WIN32)
	set(MINIZIP_SOURCE_FILES ${MINIZIP_SOURCE_FILES} iowin32.c)
endif()

add_library(Minizip ${MINIZIP_SOURCE_FILES})

target_link_libraries(Minizip z)
