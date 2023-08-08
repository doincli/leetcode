/*
 * @lc app=leetcode.cn id=150 lang=cpp
 *
 * [150] 逆波兰表达式求值
 */

// @lc code=start
#include <string>
#include <stack>
#include <vector>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        for (int i = 0; i < tokens.size(); i++)
        {
            if (tokens[i] == "+"||tokens[i] == "-"||tokens[i] == "/"||tokens[i] == "*")
            {
                long long num1 = st.top();//second num
                st.pop();
                long long num2 = st.top();//first num
                st.pop();
                if (tokens[i] == "+")
                {
                    st.push(num1+num2);
                }else if (tokens[i] == "-")
                {
                    st.push(num2 -num1);
                }else if (tokens[i] == "*")
                {
                    st.push(num2*num1);
                }else if (tokens[i] == "/")
                {
                    st.push(num2/num1);
                }
            }else
            {
                st.push(stoll(tokens[i]));
            }
        }
        return st.top();
    }
};
// @lc code=end

