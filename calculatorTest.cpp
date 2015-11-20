
#include <gtest/gtest.h>
#include <string>

#include "calculator.cpp"

TEST(CalculatorTest, giveSingleValueExpectSameSum)
{
  EXPECT_EQ(0, calculate("0"));
}