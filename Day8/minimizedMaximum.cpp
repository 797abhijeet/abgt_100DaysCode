#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool f(vector<int> nums, int mid, int h)
    {
        double count = 0;

        for (auto it : nums)
        {
            count += (ceil)((double)it / (double)(mid));
        }
        return count <= h;
    }
    int minimizedMaximum(int n, vector<int> &quantities)
    {
        int low = 0;
        int high = *max_element(quantities.begin(), quantities.end());
        int ans = -1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (f(quantities, mid, n))
            {
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return ans;
    }
};