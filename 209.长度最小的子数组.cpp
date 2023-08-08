/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int fast = 0,slow = 0;
        int result = INT32_MAX;
        while (fast < nums.size())
        {
            sum += nums[fast];
            while (sum >= target)
            {
                int len = fast - slow + 1;
                result = result < len ? result : len;
                cout << result << endl;
                sum -= nums[slow++];
            }
            fast++;
        }
        return result = result == INT32_MAX? 0 : result;
    }
};
// @lc code=end

