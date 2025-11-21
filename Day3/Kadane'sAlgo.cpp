#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        // Kadane's Alogorithm

        int n = nums.size();

        int maxNegSum = INT_MIN;
        int currentSum = 0;
        int count = 0;
        int maxSum = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] < 0)
                count++;

            currentSum += nums[i];

            if (currentSum < 0)
            {
                maxNegSum = max(maxNegSum, currentSum);
                currentSum = 0;
            }
            maxSum = max(maxSum, currentSum);
        }

        if (count == n)
        {
            return maxNegSum;
        }
        return maxSum;
    }
};