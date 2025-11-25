#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> answerQueries(vector<int> &nums, vector<int> &queries)
    {
        sort(nums.begin(), nums.end());
        vector<int> pre;

        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            pre.push_back(sum);
        }

        vector<int> res;

        for (int i = 0; i < queries.size(); i++)
        {
            int low = 0;
            int high = nums.size() - 1;
            int target = queries[i];
            int count = 0;
            while (low <= high)
            {
                int mid = low + (high - low) / 2;
                if (pre[mid] <= target)
                {
                    count = mid + 1;
                    low = mid + 1;
                }
                else
                    high = mid - 1;
            }
            res.push_back(count);
        }
        return res;
    }
};