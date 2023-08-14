/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        vector<int> vec(n+1,1);
        vec[1] = 1;
        for (int i = 2; i < n+1; i++)
        {
            vec[i] = vec[i-1] + vec[i-2];
        }
        return vec[n];
    }
};
// @lc code=end

