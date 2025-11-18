#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int second=INT_MIN;
        int largest=INT_MIN;
        int n=arr.size();
        
       
        
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                second=largest;
                largest=arr[i];
            }
            if(arr[i]>second and arr[i]<largest){
                second=arr[i];
            }
        }
        return second;
    }
};