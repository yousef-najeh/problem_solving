#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyTime=prices[0];
        int profit=0;

        for (int i = 0; i < prices.size(); i++) {
            if (buyTime > prices[i]) {
                buyTime = prices[i];
            }
            profit = max(profit, prices[i] - buyTime);
        }

        return profit;
    }
};