#include <bits/stdc++.h>
using namespace std;    

class Solution {
public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int sum = 0;
        int i = 0, j = 0;

        while (j < arr.size()) {
            sum += arr[j];

            if (sum > target) {
                while (sum > target && i <= j) {
                    sum -= arr[i++];
                }
            }

            if (sum == target) {
                return {i+1, j+1};
            }

            j++;
        }

        return {-1};
    }
};
