#include <gtest/gtest.h>
#include "../../../include/student.h"

TEST(studentClassTest, Constructor)
{
	student s1("AAA", 20, 100);
	EXPECT_EQ(s1.getSName(), "AAA");
	EXPECT_EQ(s1.getSAge(), 20);
	EXPECT_EQ(s1.getSId(), 100);
}

TEST(studentClasstest, setMethods)
{
	student s2;
	s2.setSName("BBB");
	s2.setSAge(21);
	s2.setSId(200);

	EXPECT_EQ(s2.getSName(), "BBB");
	EXPECT_EQ(s2.getSAge(), 21);
	EXPECT_EQ(s2.getSId(), 200);
}
