#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

class Solution
{
public:
    string postToInfix(string exp)
    {
        // Write your code here
        stack<string> st;

        for (int i = 0; i < exp.size(); i++)
        {
            string ch = "";
            ch = exp[i];
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
                st.push(')' + left + ch + right + '(');
            }
        }
        reverse(st.top().begin(), st.top().end());
        return st.top();
    }
};