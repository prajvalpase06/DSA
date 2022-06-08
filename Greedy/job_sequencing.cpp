class Solution
{
    public:
    //Function to find the maximum profit and the number of jobs done.

    static bool comparison(Job a, Job b){
        return (a.profit > b.profit);
    }

    vector<int> JobScheduling(Job arr[], int n)
    { 
        // your code here
        vector<int> ans;
        sort(arr, arr+n, comparison);
        bool slot[n];
        int res[n];
        int cnt=0, profit=0;

        for(int i=0;i<n;i++){
            slot[i] = 0;
        }

        for(int i=0;i<n;i++){
            for(int j=min(n, arr[i].dead)-1; j>=0; j--){
                if(!slot[j]) {
                    res[j] = i;
                    profit += arr[i].profit;
                    cnt++;
                    slot[j] = 1;
                    break;
                }    // free
            }
        }

        ans.push_back(cnt);
        ans.push_back(profit);

    }
}
