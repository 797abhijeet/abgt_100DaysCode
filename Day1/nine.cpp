#include <bits/stdc++.h>
using namespace std;    

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) c++;
            else c=0;

            maxi=max(maxi,c);
        }
        return maxi;
    }
};