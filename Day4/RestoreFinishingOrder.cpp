#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        map<int,int>mp;
        for(auto it : friends){
            mp[it]++;
        }
        vector<int>ans;
        for(auto it : order){
            if(mp.count(it)){
                ans.push_back(it);
            }
        }
        return ans;
    }
};