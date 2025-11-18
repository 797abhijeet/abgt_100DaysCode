#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int c = 0;

        for (auto it : nums)
        {
            c ^= it;
        }
        return c;
    }
};