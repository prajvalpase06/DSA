class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length(), j, i;
        for(i=0, j=n-1; i<j; i++,j--){
          while(!isalnum(s[i]) and i<j) i++;    // Increment left pointer if not alphanumeric
          while(!isalnum(s[i]) and i<j) j--;    // Decrement right pointer if no alphanumeric

          if(toupper(s[i]) != toupper(s[j])) return false;
        }

        return true;
    }
};
