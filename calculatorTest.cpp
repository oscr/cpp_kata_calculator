#include <gtest/gtest.h>

#include "calculator.h"

TEST(CalculatorTest, add_singleValue_sumEqualsValue)
{
  EXPECT_EQ(1, add("1"));
}
