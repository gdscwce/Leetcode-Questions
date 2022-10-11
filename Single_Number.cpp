/*
Problem Name: Single Number
Problem Link: https://leetcode.com/problems/single-number
Difficulty: Easy
Problem Number: 136
Author: Ashish Verma
*/

#include <bits/stdc++.h>
using namespace std;

// main soulution class
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (auto x : nums)
            ans ^= x;
        return ans;
    }
};

// Driver code:
int main()
{
    vector<int> nums = {1, 1, 2, 5, -1, -1, 5};
    Solution obj;
    int ans = obj.singleNumber(nums);
    cout << ans << endl;
    return 0;
}