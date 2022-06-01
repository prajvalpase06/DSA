#include<bits/stdc++.h>
using namespace std;


int maximumSumSubarray(int K, vector<int> &Arr , int N){
      int mx = INT_MIN;
      int sum=0;
      int i,j;
      i = j = 0;

      while(j < N){
        sum += Arr[j];
        if(j-i+1 < k) j++;         // j-i+1 is the size of the window
        else if(j-i+1 == k){
            mx = max(mx, sum);
            sum = sum - arr[i];     // remove the first element and move the window;
            i++; j++;
          }
      }

      return mx;
}
