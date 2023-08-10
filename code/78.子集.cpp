/*
 * @lc app=leetcode.cn id=78 lang=cpp
 *
 * [78] 子集
 */

// @lc code=start
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;
    void backtracking(vector<int>& nums,int index){
        result.push_back(path);
        for (int i = index; i < nums.size(); i++)
        {
            path.push_back(nums[i]);
            backtracking(nums,i+1);
            path.pop_back();
        }
        
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        result.clear();
        path.clear();
        backtracking(nums, 0);
        return result;
    }
};
// @lc code=end

