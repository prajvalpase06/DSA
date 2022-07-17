// EXPLANATION
//
// Create a Stack of String with following condition.
// Iterate the loop till you doesn't reaches the end of string.
// If you encounter a "/" then ignore it.
// Create a temp String & Iterate the while loop till you doesn't find "/" and append it to temp.
// Now check if temp == "." , then ignore it.
// If temp == ".." then pop the element from the stack if it exists.
// If no of the above 2 matches push temp to stack as you find a valid path.
// Check out temp string on basis of above conditions till you doesn't find "/".
// Now add all stack elements to result as res = "/" + st.top() + res
// If res.size() is 0 then return "/" if no directory or file is present.
// At last return res.


// https://leetcode.com/problems/simplify-path/discuss/1847357/C%2B%2B-oror-Easy-oror-Stack-oror-Simple-oror-Explained-oror-Algorithm


class Solution {
public:
    string simplifyPath(string path) {

        stack<string> st;
        string res;

        for(int i = 0;  i<path.size(); ++i)
        {
            if(path[i] == '/')
                continue;
            string temp;
            while(i < path.size() && path[i] != '/')
            {
                temp += path[i];
                ++i;
            }
            if(temp == ".")
                continue;
            else if(temp == "..")
            {
                if(!st.empty())
                    st.pop();
            }
            else
                st.push(temp);
        }
        while(!st.empty())
        {
            res = "/" + st.top() + res;
            st.pop();
        }

        if(res.size() == 0)
            return "/";

        return res;
    }
};
