#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int averageValue(vector<int> &nums)
    {
        int count = 0;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0 and nums[i] % 3 == 0)
            {

                sum += nums[i];
                count++;
            }
        }

        return count == 0 ? 0 : sum / count;
    }
};