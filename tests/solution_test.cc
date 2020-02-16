#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(ReturnElementTest, ReturnsValidElement) {
  Solution s;
  vector<int> v={-2,3,-1,2,5,6,10};
  int k=3;
  int actual = s.returnelement(v,k);
  int expected = 5;
  EXPECT_EQ(expected, actual);
}
TEST(ReturnElementTest, ReturnsInvalidElement) {
  Solution s;
  vector<int> v={};
  int k=3;
  int actual = s.returnelement(v,k);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}