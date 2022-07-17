#include <bits/stdc++.h>

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        // move all the nonzero elements advance
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j++] = nums[i];
            }
        }
        for (;j < nums.size(); j++) {
            nums[j] = 0;
        }
    }
};

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         queue<int> q;
//         int c=0;
//         for(auto n:nums){
//             if(n != 0) q.push(n);
//             else c++;
//         }
        
//         while(c--) q.push(0);
//         int k=0;
//         while(!q.empty()){
//             nums[k++] = q.front();
//             q.pop();
//         }
//     }
// };