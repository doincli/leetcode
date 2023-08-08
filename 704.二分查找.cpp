/*
 * @lc app=leetcode.cn id=704 lang=cpp
 *
 * [704] 二分查找
 */

// @lc code=start
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len = nums.size();
        int left = 0;
        int right = len-1;
        while (left <= right)
        {
            int mid = (right + left)/2;
            if (nums[mid] > target)
            {
                right = mid - 1;
            }else if (nums[mid] < target)
            {
                left = mid + 1;
            }else
            {
                cout << mid;
                return mid;
            }
        }
        return -1;
    }
};
// @lc code=end
