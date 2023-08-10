/*
 * @lc app=leetcode.cn id=131 lang=cpp
 *
 * [131] 分割回文串
 */

// @lc code=start
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<string>> result;
    vector<string> path;

    bool ishuiwen(string s){
        int slow = 0;
        int n = s.size()-1;
        while (slow < n)
        {
            if (s[slow] == s[n])
            {
                slow++;
                n--;
            }else
            {
                return false;
            }   
        }
        return true;       
    }

    void backtracing(string &s,int index){
        if (index == s.size())
        {
            result.push_back(path);
            return;
        }

        for (int i = index; i < s.size(); i++)
        {
            string str = s.substr(index,i-index + 1);
           // cout << str << " " << path.size() << endl;
            if (ishuiwen(str))
            {
                path.push_back(str);
            }else
            {
                continue;
            }
            backtracing(s,i+1);
            path.pop_back();
        }
        
        
    }
    vector<vector<string>> partition(string s) {
        path.clear();
        result.clear();
        backtracing(s,0);
        return result;
    }
};
// @lc code=end

