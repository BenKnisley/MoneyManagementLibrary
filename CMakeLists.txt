## Project Details
project( MoneyManagment )
cmake_minimum_required( VERSION 2.8 )

## Compiler and Linker Settings
set( CMAKE_CXX_FLAGS "-g -Wall -std=c++11" )
set( CMAKE_EXE_LINKER_FLAGS "-ldl" )

## Set input directorys
file(GLOB SOURCES src/*.cpp)
include_directories( ${CMAKE_BINARY_DIR}/../include )

## Set outpust directorys
set( CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../static ) ## Output Static Libs
set( CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/../shared ) ## Output Shared Libs
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin ) ## Output Executable


## Set project include directory

## Create final executable and shared library
add_executable( Money ./test/FullTest.cpp ${SOURCES} )
add_library( MoneyLib SHARED ${SOURCES} )
