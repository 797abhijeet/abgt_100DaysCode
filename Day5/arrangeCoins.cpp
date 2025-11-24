#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        // 1 -> 1
        // 2 -> 3
        // 3 -> 6
        // 4 -> 10
        // 5 -> 15
        // 6 => 21
        // 7 -> 28
        int ans = 0;
        int low = 1;
        int high = 1e9;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            long long cal = mid * (mid + 1) / 2;

            if (cal <= n) {
                ans = mid;
                low = mid + 1;
            } else
                high = mid - 1;
        }
        return ans;
    }
};