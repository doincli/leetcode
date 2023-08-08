/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
    bool transation(TreeNode* left,TreeNode* right){
        if (left == NULL&& right == NULL)
        {
            return true;
        }else if (left != NULL&& right == NULL)
        {
            return false;
        }else if (left == NULL&& right!= NULL)
        {
            return false;
        }else if (left->val  != right->val)
        {
            return false;
        }
        bool out =  transation(left->left,right->right);
        bool in = transation(left->right,right->left);
        bool final = out && in;
        return final;
    }


    bool isSymmetric(TreeNode* root) {
        if (root == nullptr)
        {
            return true;
        }
        
        bool result = transation(root->left,root->right);
        return result;
    }
};
// @lc code=end

