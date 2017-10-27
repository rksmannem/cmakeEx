#include "gtest/gtest.h"
#include "Addition.h"

#define LOG_TAG "AdditionTest"

class AdditionTest : public ::testing::Test {
protected:
    virtual void SetUp(){
        LOG_INFO("\n");
    }

    virtual void TearDown(){
        LOG_INFO("\n");;
    }

public:
    AdditionTest(){
        LOG_INFO("\n");
    }

    ~AdditionTest(){
        LOG_INFO("\n");;
    }
};

TEST_F(AdditionTest, twoValues)
{
    const int x = 4;
    const int y = 5;

    Addition add;
    EXPECT_EQ(add.twoValues(x,y), 9);
    EXPECT_EQ(5, add.twoValues(2,3));
}