cmake_minimum_required(VERSION 2.8)
project(rshell)

set(CMAKE_CXX_STANDARD 11)


ADD_SUBDIRECTORY(googletest)

#set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall ")

set(HEADERS header/CBase.h header/CConnector.h header/CAndConnector.h header/CCommand.h header/COrConnector.h header/CSeparatorConnector.h header/CRdirConnector.h header/CPipeConnector.h header/CRunMode.h header/CParser.h header/CTestCmd.h)
set(SOURCES src/main.cpp src/CCommand.cpp)
set(TESTING unit_tests/all_unit_tests.cpp src/CCommand.cpp)

ADD_EXECUTABLE(rshell
        ${HEADERS} ${SOURCES})

ADD_EXECUTABLE(test
        ${HEADERS} ${TESTING})


TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)