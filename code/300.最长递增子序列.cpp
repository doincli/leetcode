/*
 * @lc app=leetcode.cn id=300 lang=cpp
 *
 * [300] 最长递增子序列
 */

// @lc code=start
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (set.find(nums[i]) != set.end())
            {
                continue;
            }else{
                
            }
            
        }
        
    }
};
// @lc code=end

