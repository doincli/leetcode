/*
 * @lc app=leetcode.cn id=226 lang=cpp
 *
 * [226] 翻转二叉树
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
#include <algorithm>
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
    void transation(TreeNode* root){
        if (root == nullptr)
        {
            return ;
        }
        swap(root->left,root->right);
        transation(root->left);
        transation(root->right);
        
    }
    TreeNode* invertTree(TreeNode* root) {
        transation(root);
        return root;
    }
};
// @lc code=end

