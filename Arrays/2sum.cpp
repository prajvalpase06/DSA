#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target)
{
        vector<int> as;
        unordered_map<int, int> mp;
        int n = numbers.size();

        for(int i=0; i<n; i++){
            int f = target - numbers[i];
            if(mp.find(f) != mp.end()){
                as.push_back(mp[f]);
                as.push_back(i);
            }
            mp[numbers[i]] = i;
        }
        return as;
}
};
