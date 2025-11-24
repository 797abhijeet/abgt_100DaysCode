#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        long long n = nums.size();
        long long count = 0;

        for (int i = 0; i < n; i++) {
            long long lowerRemaining = lower - nums[i];
            long long upperRemaining = upper - nums[i];

            long long left = -1, right = -1;

         
            long long l = i + 1, r = n - 1;
            while (l <= r) {
                long long mid = l + (r - l) / 2;
                if (nums[mid] >= lowerRemaining) {
                    left = mid;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            if (left == -1) continue;

            l = i + 1, r = n - 1;
            while (l <= r) {
                long long mid = l + (r - l) / 2;
                if (nums[mid] <= upperRemaining) {
                    right = mid;
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
            if (right == -1 || right < left) continue;

            count += (right - left + 1);
        }
        return count;
    }
};
