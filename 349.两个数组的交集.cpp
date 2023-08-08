/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
#include <string>
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>  result;
        unordered_set<int> set1(nums1.begin(),nums1.end());
        for (int i = 0; i < nums2.size(); i++)
        {
            if (set1.find(nums2[i]) != set1.end())
            {
                result.insert(nums2[i]);
            }
            
        }
        vector<int> result_fin(result.begin(),result.end());
        return result_fin;
    }
};
// @lc code=end

