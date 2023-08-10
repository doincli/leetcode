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
    void backtracing(int k,int n,int index){
        if (path.size() == k)
        {
            result.push_back(path);
            return;
        }
        for (int i = index; i <= n; i++)
        {
            path.push_back(i);
            backtracing(k,n,i+1);
            path.pop_back();
        }
        
    }
    vector<vector<int>> combine(int n, int k) {
        path.clear();
        result.clear();
        backtracing(k,n,1);
        return result;
    }
};
// @lc code=end

