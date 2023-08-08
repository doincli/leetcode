/*
 * @lc app=leetcode.cn id=200 lang=cpp
 *
 * [200] 岛屿数量
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int n,m;    
    void dfs(vector<vector<char>>& grid, vector<vector<int>> &check,int x,int y){
        if (x < 0 || x >= n || y < 0 || y >= m || check[x][y] == 1 || grid[x][y] == '0')
        {
            return;
        }
        check[x][y] = 1;
        dfs(grid,check,x+1,y);
        dfs(grid,check,x,y+1);
        dfs(grid,check,x-1,y);
        dfs(grid,check,x,y-1);
    }

    int numIslands(vector<vector<char>>& grid) {
         n = grid.size();
         m = grid[0].size();
        vector<vector<int>> check(n,vector<int>(m,0));
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == '1' && check[i][j] == 0)
                {
                    dfs(grid,check,i,j);
                    result++;
                }
            }
        }
        return result;
    }
};
// @lc code=end

