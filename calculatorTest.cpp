
#include <gtest/gtest.h>
#include <string>

#include "calculator.cpp"

TEST(CalculatorTest, calculate_singleValue_sumEqualsValue)
{
  EXPECT_EQ(1, calculate("1"));
}