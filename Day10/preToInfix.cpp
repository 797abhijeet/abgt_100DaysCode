#include <bits/stdc++.h>
using namespace std;



class Solution
{
public:
    string preToInfix(string pre_exp)
    {
        // Write your code here
        int n = pre_exp.size();
        stack<string> st;

        for (int i = n - 1; i >= 0; i--)
        {
            string ch = "";
            ch = pre_exp[i];

            if (isalnum(ch[0]))
            {
                st.push(ch);
            }
            else
            {
                string left = st.top();
                st.pop();
                string right = st.top();
                st.pop();
                st.push('(' + left + ch + right + ')');
            }
        }
        return st.top();
    }
};