#include <bits/stdc++.h>
using namespace std;


//pick and dont pick
void subsets(string s, string op){
    if(s.length() == 0) { cout<<op<<" "; return; } 
    string op1 = op;
    string op2 = op;

    op2.push_back(s[0]);
    s.erase(s.begin() + 0);

    subsets(s, op1);
    subsets(s, op2);
}


int main(){
    string s;
    cin>>s;

    string op = "";
    subsets(s,op);
}