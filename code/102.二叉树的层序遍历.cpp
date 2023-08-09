/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <vector>
#include <iostream>
using namespace std;
// struct TreeNode {
//       int val;
//       TreeNode *left;
//       TreeNode *right;
//       TreeNode() : val(0), left(nullptr), right(nullptr) {}
//       TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//   };
class Solution {
public:
    void transation(TreeNode* root,int depth,vector<vector<int>> &result){
        if (root == nullptr)
        {
            return ;
        }
        if (result.size() == depth)
        {
            result.push_back(vector<int>());
        }
        result[depth].push_back(root->val);
        transation(root->left,depth+1,result);
        transation(root->right,depth+1,result);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        //int depth = 0;
        transation(root,0,result);
        return result;
    }
};
// @lc code=end

