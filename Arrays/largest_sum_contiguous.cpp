#include<bits/stdc++.h>
using namespace std;

int LargestSumContiguous(vector<int> ar){
    int max_End = 0, msf=INT_MIN;
    for(auto var:ar){
        max_End += var;
        if(max_End > msf) msf = max_End;
        if(max_End < 0) max_End = 0;
    }
    return msf;
}