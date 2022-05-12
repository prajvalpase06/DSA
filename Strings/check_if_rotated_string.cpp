#include<iostream>
using namespace std;

bool areRotations(string s2, string s1){
    string temp = s1+s2;
    if(s1.length() != s2.length()) return false;
    if(temp.find(s2) != string::npos) return true;
    else return false; 
}