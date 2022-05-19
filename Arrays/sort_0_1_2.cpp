#include<bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
    int c0,c1,c2;
    c0=c1=c2=0;
    int k=0;
    for(int i=0;i<n;i++){
        if(a[i] == 0) c0++;
        if(a[i] == 1) c1++;
        if(a[i] == 2) c2++;
    }
    while(c0--){
        a[k++] = 0;
    }
    while(c1--){
        a[k++] = 1;
    }
    while(c2--){
        a[k++] = 2;
    }
}