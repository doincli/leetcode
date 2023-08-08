/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if (s.size() % 2 != 0)
        {
            return false;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                st.push(')');
            }else if (s[i] == '{')
            {
                st.push('}');
            }else if (s[i] == '[')
            {
                 st.push(']');
            }else if (st.empty() || s[i] != st.top())
            {
                return false;
            }else
            {
                st.pop();
            }        
        }
        return st.empty();
        
    }
};
// @lc code=end

