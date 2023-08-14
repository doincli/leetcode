/*
 * @lc app=leetcode.cn id=343 lang=cpp
 *
 * [343] 整数拆分
 *
 * https://leetcode.cn/problems/integer-break/description/
 *
 * algorithms
 * Medium (62.35%)
 * Likes:    1059
 * Dislikes: 0
 * Total Accepted:    231.8K
 * Total Submissions: 371.9K
 * Testcase Example:  '2'
 *
 * 给定一个正整数 n ，将其拆分为 k 个 正整数 的和（ k >= 2 ），并使这些整数的乘积最大化。
 * 
 * 返回 你可以获得的最大乘积 。
 * 
 * 
 * 
 * 示例 1:
 * 
 * 
 * 输入: n = 2
 * 输出: 1
 * 解释: 2 = 1 + 1, 1 × 1 = 1。
 * 
 * 示例 2:
 * 
 * 
 * 输入: n = 10
 * 输出: 36
 * 解释: 10 = 3 + 3 + 4, 3 × 3 × 4 = 36。
 * 
 * 
 * 
 * 提示:
 * 
 * 
 * 2 <= n <= 58
 * 
 * 
 */

// @lc code=start
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void loga(vector<int> &dp){
        for (int i = 0; i < dp.size(); i++)
        {
            cout << dp[i] <<" ";
        }
        cout << endl;
    } 
    int integerBreak(int n) {
        vector<int> dp(n + 1);
        loga(dp);
        dp[2] = 1;
        for (int i = 3; i <= n ; i++) {
            for (int j = 1; j < i - 1; j++) {
                dp[i] = max(dp[i], max((i - j) * j, dp[i - j] * j));
            }
         //   loga(dp);
        }
        return dp[n];
    }
};
// @lc code=end

