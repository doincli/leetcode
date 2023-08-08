/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> result;
string letter[10] = {
    "","",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tuv",
    "wxyz",
};
string path;
class Solution {
public:
 
    void backtracking(const string& digits,int index){
        if (path.size() == digits.size())
        {
            result.push_back(path);
            return ;
        }
        int num = digits[index] - '0';

        string tmp = letter[num];
        for (int i = 0; i < tmp.size(); i++)
        {
            path.push_back(tmp[i]);
            backtracking(digits,index+1);
            path.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
         path.clear();
         result.clear();
         if (digits.size() == 0)
         {
            return result;
         }
         
         backtracking(digits,0);
         return result;
    }
};
// @lc code=end

