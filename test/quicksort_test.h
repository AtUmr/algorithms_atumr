#ifndef ALGO_ATUMR_QUICKSORT_TEST_H
#define ALGO_ATUMR_QUICKSORT_TEST_H

#include<iostream>

#include <gtest/gtest.h>

#include "../include/quicksort.h"

using namespace atumr;

class QuickSortTest : public testing::Test {
  public:
    int arr[10];

  protected:
    static void SetUpTestCase() {
        
    }

    static void TearDownTestCase() {
    }

    virtual void SetUp() {
        for(int i=0;i<10;++i) {
            arr[i] = 9-i;
        }
    }

    virtual void TearDown() {
    }
};

TEST_F(QuickSortTest, SortTest){
    quickSort(arr, 0, 10);
    for(int i=0;i<10;++i) {
        EXPECT_EQ(arr[i], i);
    }
}

#endif