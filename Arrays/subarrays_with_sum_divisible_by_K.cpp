class Solution{
public:
  int subarrayDivByK(std::vector<int> v, int K){
    std::vector<int> vi(K);
    vi[0] = 1;
    int res = 0, prefix=0;

    for(auto it:v){
      prefix = (prefix + it%K + it) % K;
      res += vi[prefix];
      vi[prefix]++;
    }

    return res;
  }
};
