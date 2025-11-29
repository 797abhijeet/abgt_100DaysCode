#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

class Solution
{
public:
    string postToPre(string post_exp)
    {
        // Write your code here
        stack<string> st;

        int n = post_exp.size();

        for (int i = 0; i < n; i++)
        {
            string ch = "";
            ch = post_exp[i];
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
                st.push(ch + right + left);
            }
        }
        return st.top();
    }
};