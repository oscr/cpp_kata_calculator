cmake_minimum_required(VERSION 2.6)

add_subdirectory(gtest-1.7.0)

enable_testing()

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable( calculator_test calculatorTest.cpp calculator.h calculator.cpp)

target_link_libraries(calculator_test gtest gtest_main)

add_test( calculator_test calculator_test)

