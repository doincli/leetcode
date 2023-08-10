/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
#include <string>
#include <iostream>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        int record[26] = {0};
        for(char ch : s){
            record[ch-'a']++;
        }
        for(char ch : t){
            record[ch - 'a']--;
        }
        for (int i = 0; i < 26; i++)
        {
            if (record[i] != 0)
            {
                return false;
            }
            
        }
        return true;
    }
};
// @lc code=end

