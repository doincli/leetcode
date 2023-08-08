/*
 * @lc app=leetcode.cn id=77 lang=cpp
 *
 * [77] 组合
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> result;
vector<int> path;
class Solution {
public:
    void backtracking(int n, int k,int index){
        if (path.size() == k)
        {
            result.push_back(path);
            return;
        }
        for (int i = index; i <= n; i++)
        {
            path.push_back(i);
            backtracking(n,k,i+1);
            path.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        
        result.clear();
        // path.clear();
        backtracking(n,k,1);
        return result;
    }
};
// @lc code=end

