
#include <gtest/gtest.h>
#include <string>

#include "calculator.cpp"

TEST(CalculatorTest, add_singleValue_sumEqualsValue)
{
  EXPECT_EQ(1, add("1"));
}