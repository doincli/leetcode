/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int num : nums){
            map[num]++;
        }
        int limit= nums.size()/2;
        for (auto it = map.begin(); it!=map.end() ; it++)
        {
            if (it->second > limit)
            {
                return it->first;
            }
            
        }
        return 0;
    }
};
// @lc code=end

