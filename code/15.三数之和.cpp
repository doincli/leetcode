/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
#include <string>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
       sort(nums.begin(),nums.end());
       for (int i = 0; i < nums.size(); i++)
       {
        if (i > 0 && nums[i] == nums[i-1])
        {
            continue;
        }
        int left = i + 1;
        int right = nums.size()-1;
        while (right > left)
        {
            int sum = nums[right] + nums[left] + nums[i];
            if (sum > 0)
            {
                right--;
            }else if (sum < 0)
            {
                left++;
            }else
            {
                result.push_back({nums[i],nums[left],nums[right]});
                while (left < right && nums[left] == nums[left+1])
                {
                    left++;
                }
                while (left < right && nums[right] == nums[right - 1])
                {
                    right--;
                }
                left++;
                right--;
            }        
        }
       }
        return result;
    }
};
// @lc code=end

