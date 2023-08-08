/*
 * @lc app=leetcode.cn id=309 lang=cpp
 *
 * [309] 最佳买卖股票时机含冷冻期
 */

// @lc code=start
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
    /*
dp[i][0] 买入状态：
1.前一天 
2.保持卖出的状态 - 今天金额
3.冷冻期  - 今天金额

dp[i][1] 保持卖出状态
1.前一天保持卖出
2.前一天冷冻期

dp[i][2] 今天卖出
1.前一天持有  + 今天金额

dp[i][3] 冷冻状态
1.前一天卖出

*/
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(4, 0));
        dp[0][0] = -prices[0];
        for (int i = 1; i < n; i++)
        {
            dp[i][0] = max(dp[i-1][0],max(dp[i-1][1] - prices[i],dp[i-1][3]- prices[i]));
            dp[i][1] = max(dp[i - 1][1], dp[i - 1][3]);
            dp[i][2] = dp[i - 1][0] + prices[i];
            dp[i][3] = dp[i - 1][2];
        }
        int result = max(dp[n - 1][1], max(dp[n - 1][2], dp[n - 1][3]));
        return result;
    }
};
// @lc code=end

