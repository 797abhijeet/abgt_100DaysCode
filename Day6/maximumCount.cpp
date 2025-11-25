#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumCount(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        // Count negatives: find last index where nums[mid] < 0
        int low = 0, high = n - 1;
        int lastNeg = -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] < 0)
            {
                lastNeg = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        int negCount = lastNeg + 1;

        low = 0, high = n - 1;
        int firstPos = n;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] > 0)
            {
                firstPos = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        int posCount = n - firstPos;

        return max(posCount, negCount);
    }
};
