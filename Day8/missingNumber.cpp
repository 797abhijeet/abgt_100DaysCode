#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        int missing = 0;
        int current = 1;
        int i = 0;

        while (1)
        {
            if (i < arr.size() and current == arr[i])
            {
                i++;
            }
            else
            {
                missing++;
                if (missing == k)
                {
                    return current;
                }
            }
            current++;
        }
        return -1;
    }
};