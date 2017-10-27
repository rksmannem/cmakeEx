#include "gtest/gtest.h"
#include "../../../include/Multiply.h"

#define LOG_TAG "MultiplyTest"

class MultiplyTest : public ::testing::Test
{
protected:
    virtual void SetUp(){
        LOG_INFO("\n");
    }

    virtual void TearDown(){
        LOG_INFO("\n");
    }

public:
    MultiplyTest(){
       LOG_INFO("\n");
    }

    ~MultiplyTest(){
       LOG_INFO("\n");
    }
};

TEST_F(MultiplyTest, twoValues)
{
    Multiply mul;
    const int x = 10;
    const int y = 25;
    EXPECT_EQ(250, mul.twoValues(x,y));

    EXPECT_EQ(mul.twoValues(1000, 1000), 1000000);

}