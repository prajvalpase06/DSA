#include <bits/stdc++.h>
#include <vector>

class Solution {
    public:
        int gas_Station(vector<int> gas, vector<int> cost){
            int total_gas=0, total_cost=0;
            int start=0, current_fuel=0;

            for(int i=0; i<gas.size(); i++){
                total_cost += cost[i];
                total_gas += gas[i];
            }

            if(total_cost > total_gas) return -1;

            for(int i=0; i<gas.size(); i++){
                current_fuel += gas[i] - cost[i];
                if(current_fuel < 0) { start = i+1; current_fuel=0; }
            }

            return start;
        }
};