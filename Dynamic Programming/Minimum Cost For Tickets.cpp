class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size(),i,ans=0;
        int m=days[n-1];
        int dp[m+1];
        memset(dp,-1,sizeof(dp));
        for(i=0; i<n; i++){
            dp[days[i]]=0;
        }
        for(i=0; i<=m; i++)
            cout<<dp[i]<<" ";
        
        cout<<endl;
        dp[0]=0;
        for(i=1; i<=m; i++){
            if(dp[i]==-1){
                dp[i]=dp[i-1];
            }
            else{
                dp[i]=min(dp[i-1]+costs[0],min(dp[max(0,i-7)]+costs[1],dp[max(0,i-30)]+costs[2]));
               }
        }
        return dp[m];
        
    }
};
