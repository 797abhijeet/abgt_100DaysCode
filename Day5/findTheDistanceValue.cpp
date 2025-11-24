#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
    {
        int ans = arr1.size();
        sort(arr2.begin(), arr2.end());
        // arr1[i] - d ≤ arr2[j] ≤ arr1[i] + d

        for (int i = 0; i < arr1.size(); i++)
        {
            int low = 0;
            int high = arr2.size() - 1;
            int x1 = arr1[i] - d;
            int x2 = arr1[i] + d;

            while (low <= high)
            {
                int mid = low + (high - low) / 2;
                if (arr2[mid] <= x2 and arr2[mid] >= x1)
                {
                    ans--;
                    break;
                }
                else if (arr2[mid] < x1)
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        return ans;
    }
};