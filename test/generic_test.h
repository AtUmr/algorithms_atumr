#ifndef _ALGO_ATUMR_GENERIC_TEST_H_
#define _ALGO_ATUMR_GENERIC_TEST_H_

#include <gtest/gtest.h>
#include "../include/generic.h"

using namespace atumr;

TEST(GenericTest, MaxTest){
    EXPECT_EQ(max(1, 2), 2);
    EXPECT_NE(max(-1, -2), -2);
}

TEST(GenericTest, MinTest){
    EXPECT_EQ(min(1, 2), 1);
    EXPECT_NE(min(-1, -2), -1);
}

TEST(GenericTest, SwapTest){
    int a=1, b=2;
    swap(a, b);
    EXPECT_EQ(a, 2);
    EXPECT_EQ(b, 1);
}

#endif