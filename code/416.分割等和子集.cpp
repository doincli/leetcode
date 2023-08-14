/*
 * @lc app=leetcode.cn id=416 lang=cpp
 *
 * [416] 分割等和子集
 *
 * https://leetcode.cn/problems/partition-equal-subset-sum/description/
 *
 * algorithms
 * Medium (52.25%)
 * Likes:    1643
 * Dislikes: 0
 * Total Accepted:    373.5K
 * Total Submissions: 714.8K
 * Testcase Example:  '[1,5,11,5]'
 *
 * 给你一个 只包含正整数 的 非空 数组 nums 。请你判断是否可以将这个数组分割成两个子集，使得两个子集的元素和相等。
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：nums = [1,5,11,5]
 * 输出：true
 * 解释：数组可以分割成 [1, 5, 5] 和 [11] 。
 * 
 * 示例 2：
 * 
 * 
 * 输入：nums = [1,2,3,5]
 * 输出：false
 * 解释：数组不能分割成两个元素和相等的子集。
 * 
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 1 
 * 1 
 * 
 * 
 */

// @lc code=start
#include <vector>
#include <iostream>
using namespace std;

class Solution { 
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int target;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        if (sum%2)
        {
            return false;
        }else
        {
            target = sum/2;
        }
        
        vector<int> dp(target+1,0);
        for (int i = 0; i < n; i++)
        {
            for (int j = target; j >= nums[i]; j--)
            {
                dp[j] = max(dp[j],dp[j-nums[i]]+nums[i]);
            }
        }
        return dp[target] == target;
    }
};
// @lc code=end

