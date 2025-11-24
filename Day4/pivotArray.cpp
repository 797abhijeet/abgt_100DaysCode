#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> pivotArray(vector<int> &nums, int pivot)
    {
        vector<int> ans;
        map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] <= pivot)
            {
                if (nums[i] != pivot)
                    ans.push_back(nums[i]);
                mp[nums[i]]++;
            }
        }
        int size = mp[pivot];
        cout << size << endl;
        while (size--)
        {
            ans.push_back(pivot);
            mp[pivot]--;
        }
        for (auto it : nums)
        {
            if (!mp.count(it))
            {
                ans.push_back(it);
            }
        }
        return ans;
    }
};