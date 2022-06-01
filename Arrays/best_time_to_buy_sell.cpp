#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int least_so_far = INT_MAX;
        int profit_if_sold_today = 0;
        int op=0;
        for(auto pr : prices){
            if(pr < least_so_far){
                least_so_far = pr;
            }
            profit_if_sold_today = pr - least_so_far;
            if(profit_if_sold_today > op){
                op = profit_if_sold_today;
            }
        }
        return op;
    }
};