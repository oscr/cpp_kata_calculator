cmake_minimum_required(VERSION 2.8)

include("cmake/GTest.cmake")

cxx_test(calculator_test calculatorTest.cpp gtest_main)

