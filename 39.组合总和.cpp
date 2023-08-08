/*
 * @lc app=leetcode.cn id=39 lang=cpp
 *
 * [39] 组合总和
 */

// @lc code=start
#include <vector>
#include <iostream>
using namespace std;
vector<vector<int>> result;
vector<int> path;
class Solution {
public:

    void backtracking(vector<int>& candidates, int target,int sum,int index){
        if (sum > target)
        {
            return;
        }
        
        if (sum == target)
        {
            result.push_back(path);
            return;
        }
        
        for (int i = index; i < candidates.size(); i++)
        {
            sum += candidates[i];
            path.push_back(candidates[i]);
            backtracking(candidates,target,sum,i);
            path.pop_back();
            sum -= candidates[i];
        }
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        path.clear();
        result.clear();
        backtracking(candidates,target,0,0);
        return result;
    }
};
// @lc code=end

