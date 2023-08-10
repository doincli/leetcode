/*
 * @lc app=leetcode.cn id=40 lang=cpp
 *
 * [40] 组合总和 II
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;
    vector<bool> check;
    void loga(){
        for (int i = 0; i < path.size(); i++)
        {
            cout << path[i] <<" ";
        }
        cout <<endl;
    }
    // void backtracking(vector<int>& candidates,int sum,int target,int index,vector<bool> &check){
    //     if (sum > target)
    //     {
    //         return;
    //     }
    //     if (sum == target)
    //     {
    //         result.push_back(path);
    //     }
    //     for (int i = index; i < candidates.size(); i++)
    //     {
    //         if ( i > 0 &&  candidates[i] == candidates[i-1] &&check[i-1] == false)
    //         {
    //             continue;
    //         }
    //         sum += candidates[i];
    //         check[i] = true;
    //         path.push_back(candidates[i]);
    //         backtracking(candidates,sum,target,i+1,check);
    //         sum -=candidates[i];
    //         check[i] = false;
    //         path.pop_back();
    //     }      
        
    // }
        void backtracking(vector<int>& candidates,int sum,int target,int index,vector<bool> &check){
        loga();
        if (sum > target)
        {
            return;
        }
        if (sum == target)
        {
            result.push_back(path);
        }
        unordered_set<int> set;
        for (int i = index; i < candidates.size(); i++)
        {
            
            if (set.find(candidates[i])!=set.end())
            {
                
                continue;
            }
            set.insert(candidates[i]);
            sum += candidates[i];
            check[i] = true;
            path.push_back(candidates[i]);
            backtracking(candidates,sum,target,i+1,check);
            sum -=candidates[i];
            check[i] = false;
            path.pop_back();
        }      
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n = candidates.size();
        //sort(candidates.begin(),candidates.end());
        check = vector<bool>(n,false);
        backtracking(candidates,0,target,0,check);
        return result;
    }
};
// @lc code=end

