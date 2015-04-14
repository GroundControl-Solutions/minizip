cmake_minimum_required(VERSION 3.1)
project(minizip)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../Win32\ dependencies/include/ ${CMAKE_CURRENT_SOURCE_DIR}/../)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../Win32\ dependencies/lib/)

set(MINIZIP_SOURCE_FILES
    crypt.h
    ioapi.c
    ioapi.h
    iowin32.c
    iowin32.h
#    miniunz.c
    minizip.c
    mztools.c
    mztools.h
    unzip.c
    unzip.h
    zip.c
    zip.h)

add_library(Minizip ${MINIZIP_SOURCE_FILES})

target_link_libraries(Minizip z)
