/*
 * @lc app=leetcode.cn id=459 lang=cpp
 *
 * [459] 重复的子字符串
 */

// @lc code=start
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    void getNext(int *next,string &s){
        int j = -1;
        next[0] = -1;
        for (int i = 1; i < s.size(); i++)
        {
            while (j >= 0 && s[i] != s[j+1])
            {
                j = next[j];
            }

            if (s[j+1] == s[i])
            {
                j++;
            }
            
            next[i] = j;
        }
    }

    bool repeatedSubstringPattern(string s) {
        if (!s.size())
        {
            return false;
        }
        
        int next[s.size()];
        getNext(next,s);
        int len = s.size();
        if (next[len-1] != -1 && len % (len - next[len-1] -1) == 0)
        {
            return true;
        }
        return false;
    }
};
// @lc code=end

