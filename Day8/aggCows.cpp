#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool f(vector<int> &stalls, int mid, int k)
    {

        int last = stalls[0];
        int cows = 1;

        for (int i = 1; i < stalls.size(); i++)
        {
            if (stalls[i] - last >= mid)
            {
                cows++;
                last = stalls[i];
            }
        }
        return cows >= k;
    }
    int aggressiveCows(vector<int> &stalls, int k)
    {
        // code here
        sort(stalls.begin(), stalls.end());

        int low = 0;
        int high = 1e9;

        int ans = 0;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (f(stalls, mid, k))
            {
                ans = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        return ans;
    }
};