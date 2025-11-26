#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool f(vector<int> &nums, int mid, int k)
    {
        int p = 1;
        int load = 0;

        for (auto it : nums)
        {
            if (it > mid)
            {
                return 0;
            }
            if (load + it <= mid)
            {
                load += it;
            }
            else
            {
                p++;
                load = it;
                if (p > k)
                    return 0;
            }
        }
        return 1;
    }
    int splitArray(vector<int> &nums, int k)
    {
        int n = nums.size();
        int low = 0;
        int high = 1e9;
        int ans = -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (f(nums, mid, k))
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