#include <gtest/gtest.h>
#include "../../../include/calc.h"

TEST(calcClassTest, addition)
{
	calc ca;
	EXPECT_EQ(ca.add(10, 20), 30);
}
TEST(calcClassTest, subtraction)
{
	calc cs;
	EXPECT_EQ(cs.sub(10, 20), -10);
}
TEST(calcClassTest, multiplication)
{
	calc cm;
	EXPECT_EQ(cm.mul(10, 20), 200);
}
