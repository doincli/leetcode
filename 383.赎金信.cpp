/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] 赎金信
 *
 * https://leetcode.cn/problems/ransom-note/description/
 *
 * algorithms
 * Easy (60.82%)
 * Likes:    761
 * Dislikes: 0
 * Total Accepted:    358.8K
 * Total Submissions: 589.9K
 * Testcase Example:  '"a"\n"b"'
 *
 * 给你两个字符串：ransomNote 和 magazine ，判断 ransomNote 能不能由 magazine 里面的字符构成。
 * 
 * 如果可以，返回 true ；否则返回 false 。
 * 
 * magazine 中的每个字符只能在 ransomNote 中使用一次。
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：ransomNote = "a", magazine = "b"
 * 输出：false
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：ransomNote = "aa", magazine = "ab"
 * 输出：false
 * 
 * 
 * 示例 3：
 * 
 * 
 * 输入：ransomNote = "aa", magazine = "aab"
 * 输出：true
 * 
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 1 <= ransomNote.length, magazine.length <= 10^5
 * ransomNote 和 magazine 由小写英文字母组成
 * 
 * 
 */

// @lc code=start
#include <string>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.size() > magazine.size())
        {
            return false;
        }
        int nums[26] = {0};
        for(char ch : magazine){
            nums[ch - 'a']++;
        }
        for(char ch : ransomNote){
            nums[ch - 'a']--;
        }

        // for(auto iter = map.begin(); iter != map.end(); iter++){
        //     if (iter->second < 0)
        //     {
        //         return false;
        //     }
            
        // }
        for (int i = 0; i < 26; i++)
        {
            if (nums[i] < 0)
            {
                return false;
            }
            
        }
        
        return true;
    }
};
// @lc code=end

