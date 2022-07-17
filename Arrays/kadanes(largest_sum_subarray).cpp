#include<bits/stdc++.h>

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int msf = INT_MIN;
        int max_end = 0;

        for(auto n:nums){
            max_end += n;

            if(msf < max_end) msf = max_end;
            if(max_end < 0 ) max_end = 0;
        }
    }
};