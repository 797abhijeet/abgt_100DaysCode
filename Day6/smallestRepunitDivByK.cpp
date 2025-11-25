#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int smallestRepunitDivByK(int k)
    {
        if (k % 2 == 0 or k % 5 == 0)
            return -1;
        int rem = 0;
        int count = 0;

        for (int i = 1; i <= k; i++)
        {
            rem = ((rem * 10) + 1) % k;
            count++;

            if (rem == 0)
                return count;
        }
        return -1;
    }
};