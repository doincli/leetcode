/*
 * @lc app=leetcode.cn id=547 lang=cpp
 *
 * [547] 省份数量
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    void dfs(vector<vector<int>>& isConnected,vector<bool> &check,int n,int i){
       for (int j = 0; j < n; j++)
       {
            if (!check[j] && isConnected[i][j])
            {
                check[j] = true;
                dfs(isConnected,check,n,j);
            }    
       }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> check(n,false);
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            if (!check[i])
            {
                dfs(isConnected,check,n,i);
                result++;   
            }
            
        }
        return result;
    }
};
// @lc code=end

