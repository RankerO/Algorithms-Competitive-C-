#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int subarrayGCD(vector<int> &nums, int k)
    {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int gt = nums[i];
            if (gt == k)
            {
                ans++;
            }
            for (int j = i + 1; j < n; j++)
            {
                gt = __gcd(gt, nums[j]);
                if (gt == k)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};