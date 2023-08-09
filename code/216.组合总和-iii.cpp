/*
 * @lc app=leetcode.cn id=216 lang=cpp
 *
 * [216] 组合总和 III
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> result;
vector<int> path;
class Solution {
public:

    void backtracking(int n,int sum,int k,int index){
        if (path.size() == k)
        {   
            if (sum == n)
            {              
                result.push_back(path);
            }
            return;
        }

        for (int i = index; i < 10 -(k-path.size())+1; i++)
        {
            sum += i;
            path.push_back(i);
            backtracking(n,sum,k,i+1);
            path.pop_back();
            sum -= i;
        }
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        path.clear();
        result.clear();
        backtracking(n,0,k,1);
        return result;
    }
};
// @lc code=end

