#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;

        int current = 0;

        for (int i = 0; i < nums.size(); i++) {
            current = (current * 2 + nums[i]) % 5;
            if (current == 0)
                ans.push_back(1);
            else
                ans.push_back(0);
        }
        return ans;
    }
};