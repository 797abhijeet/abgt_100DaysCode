#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> storeOneIndex;

        for (int i = 0; i < boxes.size(); i++) {
            if (boxes[i] == '1') {
                storeOneIndex.push_back(i);
            }
        }
        vector<int> ans;
        for (int i = 0; i < boxes.size(); i++) {
            int x = 0;
            for (auto it : storeOneIndex) {
                x += abs(i - it);
            }
            ans.push_back(x);
        }
        return ans;
    }
};