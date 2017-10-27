#include "gtest/gtest.h"
#include "Stack.h"
#include "Log.h"
#include <vector>
#include <algorithm>

#define LOG_TAG "StackTest"


constexpr int MAX_STACK_CAPACITY  = 5;


class StackTests : public ::testing::Test {
protected:
    virtual void SetUp(){};
    virtual void TearDown(){};

    static void SetUpTestCase();
    static void TearDownTestCase();

public:
    StackTests() = default;
    virtual ~StackTests(){};

    static Stack* testStackPtr;
};

/*
definition of object UnderTest
(Ex: Instance of Stack class)
*/
Stack* StackTests::testStackPtr = nullptr;


void StackTests::SetUpTestCase()
{
    LOG_INFO(" ");
    if( testStackPtr == nullptr){
        delete testStackPtr;
    }

    testStackPtr = new Stack(MAX_STACK_CAPACITY);
}

void StackTests::TearDownTestCase()
{
    LOG_INFO(" ");
    delete testStackPtr;
    testStackPtr = nullptr;
}


TEST_F(StackTests, initStackTest)
{
    EXPECT_TRUE(testStackPtr->isEmpty());
    EXPECT_EQ(0, testStackPtr->getSize());
}

TEST_F(StackTests, StackpushTest1)
{
    testStackPtr->push(10);
    EXPECT_EQ(10, testStackPtr->top());
    testStackPtr->push(20);
    EXPECT_EQ(20, testStackPtr->top());
    
    EXPECT_EQ(2, testStackPtr->getSize());
}

TEST_F(StackTests, StackpushTest2)
{
    testStackPtr->push(30);
    EXPECT_EQ(30, testStackPtr->top());
    testStackPtr->push(40);
    EXPECT_EQ(40, testStackPtr->top());

    EXPECT_EQ(4, testStackPtr->getSize());
}

TEST_F(StackTests, StackpushTest3)
{
    testStackPtr->push(50);
    EXPECT_EQ(50, testStackPtr->top());
    
    EXPECT_EQ(5, testStackPtr->getSize());
}

TEST_F(StackTests, stackOverFlowTest)
{
    EXPECT_TRUE(testStackPtr->isFull());
    EXPECT_EQ(MAX_STACK_CAPACITY, testStackPtr->getSize());
}

TEST_F(StackTests, stackpopTest)
{
    std::vector<int>  stacklElemVect = {10, 20, 30, 40, 50};
    std::reverse(stacklElemVect.begin(), stacklElemVect.end());

    for( auto &eachStackElem : stacklElemVect)
    {
        EXPECT_EQ(eachStackElem, testStackPtr->top());
        testStackPtr->pop();
    }
}

TEST_F(StackTests, stackUnderFlowTest)
{
    EXPECT_TRUE(testStackPtr->isEmpty());
    EXPECT_EQ(0, testStackPtr->getSize());
}
