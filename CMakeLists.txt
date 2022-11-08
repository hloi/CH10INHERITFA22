cmake_minimum_required(VERSION 3.23)
project(CH10INHERITFA22)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_STANDARD 11)


set(CXXTEST_INCLUDE_DIR c:/cxxtest-4.4)

set(CXXTEST_PYTHON_TESTGEN_EXECUTABLE c:/cxxtest-4.4/bin/cxxtestgen)

find_package(CxxTest REQUIRED)

if(CXXTEST_FOUND)
    include_directories(${CXXTEST_INCLUDE_DIR})
    enable_testing()

    CXXTEST_ADD_TEST(unittest
            runner.cpp  # THIS IS GENERATED BUT YOU NEED TO ADD IT HERE
            ${CMAKE_CURRENT_SOURCE_DIR}/GenericItem.cpp  # add source files
            ${CMAKE_CURRENT_SOURCE_DIR}/Food.cpp  # add source files
            ${CMAKE_CURRENT_SOURCE_DIR}/ProduceItem.cpp  # add source files
            ${CMAKE_CURRENT_SOURCE_DIR}/Soup.cpp  # add source files
            ${CMAKE_CURRENT_SOURCE_DIR}/newCxxTest.h  # YOUR TEST DESCRIPTION FILE
            )

endif()

add_executable(CH10INHERITFA22 runner.cpp GenericItem.cpp GenericItem.h ProduceItem.cpp ProduceItem.h Food.cpp Food.h Soup.cpp Soup.h newCxxTest.h)
