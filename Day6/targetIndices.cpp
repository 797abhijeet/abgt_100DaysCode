#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> targetIndices(vector<int> &nums, int target)
    {
        vector<int> ans;

        int last = -1;
        int first = -1;

        int low = 0;
        int high = nums.size() - 1;
        sort(nums.begin(), nums.end());

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
            {
                first = mid;
                high = mid - 1;
            }
            else if (nums[mid] > target)
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        low = 0;
        high = nums.size() - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
            {
                last = mid;
                low = mid + 1;
            }
            else if (nums[mid] > target)
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        if (first != -1 and last != -1)
            for (int i = first; i <= last; i++)
            {
                ans.push_back(i);
            }
        return ans;
    }
};