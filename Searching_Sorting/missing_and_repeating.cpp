#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int* res = new int[2];
        set<int> dis;
        unordered_map<int, int> mymap;
        
        for(int i=0;i<n;i++){
            mymap[arr[i]]++;
        }
        
        for(auto j:mymap){
            if(j.second == 2) { res[0] = j.first; break; }
        }
        
        int s=0;
        for(int i=1;i<=n;i++){
           if(mymap.find(i) == mymap.end()) {
               res[1] = i;
           }    //i not found
        }

        return res;
    }
};