#include <bits/stdc++.h>
using namespace std;

int countTriplets(int arr[], int n, int X){
    int ans=0;
    sort(arr, arr+n);

    for(int i=0;i<n-2;i++){
        int j=i+1, k=n-1;
        if(arr[i] + arr[j] + arr[k] < X){
            ans += k-j;                 // because all the elements between j and k(last) will result in sum less than X as they are sorted 
            j++;
        }
        else{
            k--;
        }
    }
    return ans;
}