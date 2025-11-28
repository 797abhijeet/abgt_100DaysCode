#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool f(vector<int> nums, int mid, int k)
    {
        double count = 0;
        for (auto it : nums)
        {
            count += (ceil)((double)it / (double)mid);
        }
        return count <= k;
    }
    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        int ans = 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (f(nums, mid, threshold))
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