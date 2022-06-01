#include<bits/stdc++.h>
using namespace std;

int subarrayWithKSum(int arr[], int n){
    int ans=0;
    // brute force
    
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<=n;j++){
    //         int sum=0;      
    //         for(int k=i;k<j;k++){
    //             sum += arr[k];
    //         }

    //         if(sum == 0) ans++;
    //     }
    // }
    // return ans;

    //using hashmaps

    unordered_map<int, int> um;
    int cnt =0, sum=0;
    um[0] = 1;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(um.find(sum) != um.end()){ // if it exists {
            cnt += um[sum];
        }
        um[sum]++;
    }
    return cnt;
}