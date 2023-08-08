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
        vector<int> path(n+1,0);
        path[0] = 1;
        path[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            path[i] = path[i-1] + path[i-2];
        }
        return path[n];
    }
};
// @lc code=end

