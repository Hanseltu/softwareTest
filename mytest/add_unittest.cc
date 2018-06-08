#include<limits.h>
#include"add.h"
#include"../googletest/include/gtest/gtest.h"

namespace {

TEST(addTest, Negative){

    int i = -1;
    EXPECT_EQ(0,add(i,1));

    }

TEST(twoSumTest, Zero){

    EXPECT_EQ(0, add(0,0));

    }

TEST(twoSumTest, Positive){

    EXPECT_EQ(100, add(50,50));
    EXPECT_EQ(10000, add(2000,8000));
    }
} //namespace
