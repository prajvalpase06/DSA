#include<iostream>
using namespace std;

class Solution {
public:
    int maxSubStr(string str){
        //Write your code here
        int countzero = 0;
        int countone = 0;
        int res=0;
        for(int i=0; i<str.size(); i++){
            if(str[i] =='0') countzero++;
            else countone++;
            
            if(countzero == countone) res++;
        }
        return (countzero != countone) ? -1 : res;
    }
};
