#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;

        for (auto it : nums) {
            s.insert(it);
        }

        int ans = -1;

        for (auto it : s) {
            int current_element = it;
            int previous_element = it - 1;
            int count = 0;

            if (s.find(previous_element) == s.end()) {
                while (s.count(current_element)) {
                    current_element++;
                    count++;
                }
            }
            ans = max(ans, count);
        }
        return ans;
    }
};