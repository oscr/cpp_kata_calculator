cmake_minimum_required(VERSION 2.8)

include("cmake/GTest.cmake")

add_definitions(-std=c++11)

cxx_test(calculator_test calculatorTest.cpp gtest_main)

