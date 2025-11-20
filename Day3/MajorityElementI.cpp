#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int candidate = 0;
        int life = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (life == 0)
            {
                candidate = nums[i];
            }
            if (nums[i] == candidate)
            {
                life++;
            }
            else
            {
                life--;
            }
        }
        return candidate;
    }
};