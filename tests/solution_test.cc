#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>
#include <iostream>

// TEST0
TEST(Test0, Test0) {
  Solution solution;

  vector<int> input0 = {5,9,3,1,7}; 
  solution.VecSort(input0);

  vector<int> result0 = {1,3,5,7,9};
 
  EXPECT_EQ(input0, result0);
}

// TEST1
TEST(Test1, Test1) {
  Solution solution;

  vector<int> input1 = {6,4,8,3,2,5}; 
  solution.VecSort(input1);

  vector<int> result1 = {2,3,4,5,6,8};
 
  EXPECT_EQ(input1, result1);
}
