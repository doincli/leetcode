/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
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
    vector<int> result;
    void transation(TreeNode* root, vector<int> &vec){
        if (root == nullptr)
        {
            return ;
        }
        
        vec.push_back(root->val);
        transation(root->left,vec);
        transation(root->right,vec);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        transation(root,result);
        return result;
    }
};
// @lc code=end

