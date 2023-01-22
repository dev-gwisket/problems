#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
      int profit = 0;
      for (unsigned i = 1; i < prices.size(); i ++) {
        if (prices[i] > prices[i - 1]) {
          profit += prices[i] - prices[i - 1];
        }
      }

      return profit;
    }
};
