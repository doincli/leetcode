/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = 0;
        int right = 0;
        while (right < nums.size())
        {
            if (nums[right] == val)
            {
                right++;
            }else{
                nums[left++] = nums[right++];
            }
            
        }
        return left;
    }
};
// @lc code=end

