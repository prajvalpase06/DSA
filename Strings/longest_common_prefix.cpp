class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n = strs.size();
        int mn = min(strs[0].length(), strs[n-1].length());

        int i=0;
        string f=strs[0], s=strs[n-1];
        while(i<mn and f[i] == s[i])
            i++;
                     
        return f.substr(0,i);

    }
};
