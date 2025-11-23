#include<bits/stdc++.h>
using namespace std;    
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;

        for(auto it : operations){
            if(it=="--X" or it=="X--"){
                ans--;
            }
            else ans++;
        }
        return ans;
    }
};