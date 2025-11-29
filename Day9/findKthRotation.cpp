#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findKRotation(vector<int> &arr)
    {
        // Code Here
        int n = arr.size();
        int ans = INT_MAX;
        int low = 0;
        int high = n - 1;
        int index = -1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (arr[low] <= arr[high])
            {
                if (ans > arr[low])
                {
                    index = low;
                    ans = (arr[low]);
                }
                break;
            }
            else if (arr[low] <= arr[mid])
            {
                ans = min(ans, arr[low]);
                index = low;
                low = mid + 1;
            }
            else
            {
                ans = min(ans, arr[mid]);
                index = mid;
                high = mid - 1;
            }
        }
        return index;
    }
};
