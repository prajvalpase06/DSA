#include<bits/stdc++.h>
using namespace std;

vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> ans;
    int f=1,q=1;
    for(int i=0;i<n;i++){
        if(arr[i] == x) { ans.push_back(i); f=0;
        break; } 
    }
    if(f!=0) ans.push_back(-1);
    
    reverse(arr, arr+n);
    
    for(int i=0;i<n;i++){
        if(arr[i] == x) { ans.push_back(n-i-1); break; q=0;}
        // else { ans.push_back(-1);}
    }
    if(q) ans.push_back(-1);
    return ans;
}