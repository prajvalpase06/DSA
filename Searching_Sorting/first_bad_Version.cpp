class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1, high = n, mid;
        while(l<h){
          mid = l + (h-l)/2;
          if(!isBadVersion(mid)) l = mid + 1;
          else high = mid;
        }
        return l;
      }
};
