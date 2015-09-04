project(MoneyManagment)
cmake_minimum_required(VERSION 2.8)

## Set project output directorys
set( CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../static )
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin )

## Set linker and compiler flags
set(CMAKE_CXX_FLAGS "-g -Wall -std=c++11")
set (CMAKE_EXE_LINKER_FLAGS "-ldl" )

## Create So Library
##add_library(Test SHARED ./src/main.cpp)
add_executable(Money ./src/main.cpp ./src/account.cpp ./src/transaction.cpp)
add_library(MoneyLib SHARED ./src/account.cpp ./src/transaction.cpp)