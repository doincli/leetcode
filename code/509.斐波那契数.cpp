/*
 * @lc app=leetcode.cn id=509 lang=cpp
 *
 * [509] 斐波那契数
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n<2)
        {
            return n;
        }
        
        vector<int> path(n+1,0);
        path[1] = 1;
        for (int i = 2; i <=n; i++)
        {
            path[i] = path[i-1] + path[i-2];
        }
        return path[n];
    }
};
// @lc code=end

