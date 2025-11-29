#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

class Solution
{
public:
    string preToPost(string pre_exp)
    {
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
                st.push(left + right + ch);
            }
        }
        return st.top();
    }
};