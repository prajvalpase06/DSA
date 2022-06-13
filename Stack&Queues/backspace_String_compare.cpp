class Solution {
public:
    
    stack<char> getstack(string str){
        stack<char> st; 
        for(auto s:str){
            if(s == '#' and !st.empty()){
                st.pop();
            }
            else if(s != '#') st.push(s);
        }
        return st;
    }
    
    string added(stack<char> st){
        string res = "";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        return res;
    }
    
    bool backspaceCompare(string str, string tstr) {
        stack<char> st;
        stack<char> s;
        string f = "";
        string sec =  "";
        
        st = getstack(str);
        s = getstack(tstr);
                
        f = added(st);
        sec = added(s);
        
        return sec == f;
    }
};