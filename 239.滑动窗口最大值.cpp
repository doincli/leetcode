/*
 * @lc app=leetcode.cn id=239 lang=cpp
 *
 * [239] 滑动窗口最大值
 */

// @lc code=start
#include "iostream"
#include "vector"
#include <deque>
using namespace std;
class Solution {
public:
    deque<int> path;
    void push(int val){
        while (!path.empty()&&val > path.back())
        {
            path.pop_back();
        }
        path.push_back(val);
    }

    void pop(){
        path.pop_front();
    }

    int front()
    {
        return path.front();
    }

    void print(){
        for (int i = 0; i < path.size(); i++)
        {
            cout << path[i] << ",";
        }
        cout << endl;
    }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        for (int i = 0; i < k; i++)
        {
            push(nums[i]);
        }
        result.push_back(front());
        for (int i = k; i < nums.size(); i++)
        {
            if (!path.empty()&& nums[i-k] == front())
            {
                pop();
            }
            push(nums[i]);
            result.push_back(front());
        }
        return result;
    }
};
// @lc code=end

