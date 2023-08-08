/*
 * @lc app=leetcode.cn id=347 lang=cpp
 *
 * [347] 前 K 个高频元素
 */

// @lc code=start
#include <string>
#include <stack>
#include <vector>
#include <deque>
#include <unordered_map>
#include   <queue>
using namespace std;

class Solution {
public:

 class mycomparison {
    public:
        bool operator()(const pair<int, int>& lhs, const pair<int, int>& rhs) {
            return lhs.second > rhs.second;
        }
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>,mycomparison> pri_que;
        
        for (unordered_map<int, int>::iterator it = map.begin(); it != map.end(); it++) {
            pri_que.push(*it);
            if (pri_que.size() > k) { 
                pri_que.pop();
            }
        }
        vector<int> result(k);
        //no need sort
        for (int i = 0; i < k; i++)
        {
            result[i] = pri_que.top().first;
            pri_que.pop();
        }
     
         return result;
    }
};
// @lc code=end

