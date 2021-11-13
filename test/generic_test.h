#ifndef ALGO_ATUMR_GENERIC_TEST_H
#define ALGO_ATUMR_GENERIC_TEST_H

#include <cfloat>
#include <climits>

#include <gtest/gtest.h>

#include "../include/generic.h"

using namespace atumr;

TEST(GenericTest, MaxTest){
  EXPECT_EQ(max(1, 2), 2);
  EXPECT_NE(max(-1, -2), -2);
  EXPECT_EQ(max(INT_MAX, 2), INT_MAX);
  EXPECT_EQ(max('a', 'c'), 'c');
}

TEST(GenericTest, MinTest){
  EXPECT_EQ(min(1, 2), 1);
  EXPECT_NE(min(-1, -2), -1);
  EXPECT_EQ(min(INT_MIN, 2), INT_MIN);
  EXPECT_EQ(min('1', '2'), '1');
}

TEST(GenericTest, SwapTest){
  int a=1, b=2;
  swap(a, b);
  EXPECT_EQ(a, 2);
  EXPECT_EQ(b, 1);
}

#endif