#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]] = i;
    }

    for (auto x : mp)
    {
        if (x.first == target)
        {
            return x.second;
        }
    }
    return -1;
}