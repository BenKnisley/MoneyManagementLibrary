## Project Details
project( MoneyManagment )
cmake_minimum_required( VERSION 2.8 )

## Compiler and Linker Settings
set( CMAKE_CXX_FLAGS "-g -Wall -std=c++11" )
set( CMAKE_EXE_LINKER_FLAGS "-ldl" )

## Set input directorys
file(GLOB SOURCES src/*.cpp) ## Put all cpp files in src into var
file(GLOB TESTS test/*.cpp) ## Put all cpp files in test into var
include_directories( ${CMAKE_BINARY_DIR}/../include ) ## Set project include directory

## Set output directorys
set( CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../static ) ## Output Static Libs
set( CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/../shared ) ## Output Shared Libs
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin ) ## Output Executable

## Build tests
foreach( file ${TESTS} ) ##  For each file in TESTS
    get_filename_component(fileName ${file} NAME_WE) ## Extract filename
    add_executable( ${fileName} ${file} ${SOURCES} ) ## Build Test
endforeach()

## Build final shared library
add_library( MoneyLib SHARED ${SOURCES} )
