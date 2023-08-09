/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */

// @lc code=start.
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int len = nums.size();
        vector<int> result(len,0);
        int right = len-1,left = 0;
        int n = len - 1;
        while (left <= right)
        {
            if(abs(nums[left]) > abs(nums[right])){
                result[n--] = nums[left] * nums[left];
                left++;
            }else
            {
                result[n--] = nums[right] * nums[right];
                right--;
            }
        }
        return result;
    }
};
// @lc code=end

