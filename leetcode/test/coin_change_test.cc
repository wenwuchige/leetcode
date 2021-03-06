#include "leetcode/dynamic_programing/coin_change.cc"
#include "third_party/gtest/include/gtest.h"

TEST(tmp, coinChange) {
  std::vector<int> coins = {1, 2, 5};
  int amount = 11;
  EXPECT_EQ(coinChange(coins, amount), 3);
  coins = {2};
  amount = 3;
  EXPECT_EQ(coinChange(coins, amount), -1);
  coins = {186, 419, 83, 408};
  amount = 6249;
  EXPECT_EQ(coinChange(coins, amount), 20);
}
