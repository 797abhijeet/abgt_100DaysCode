#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {

            int remaining = target - nums[i];

            int low = i + 1;
            int pos = i;
            int high = n - 1;
            while (low <= high) {
                int mid = low + (high - low) / 2;

                if (nums[mid] < remaining) {
                    pos = mid;
                    low = mid + 1;
                } else
                    high = mid - 1;
            }
            count += max(0, pos - i);
        }
        return count;

        // -7 -6 -2 -1 2 3 5
        // remaining = 5 
    }
};