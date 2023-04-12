#include <gtest/gtest.h>

#include "test/generic_test.h"
#include "test/insertionsort_test.h"
#include "test/mergesort_test.h"
#include "test/quicksort_test.h"
#include "test/stack_test.h"

int main(int argc,char **argv){
  testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();
}