#include <bits/stdc++.h>
using namespace std;


bool findPair(int arr[], int size, int n){
    //code
    unordered_map<int, int> mpp;
    for (int i = 0; i < size; i++) {
        mpp[arr[i]]++;
    }
    if(n==0){
        for(auto x:mpp){
            if(x.second > 1) return true;
        }
        return false;
    }
    for (int i = 0; i < size; i++) {
        if (mpp.find(n + arr[i]) != mpp.end()) {
            return true;
        }
    }
    return false;
}