class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
         long long int m = obstacleGrid.size() , n = obstacleGrid[0].size();
        vector<vector<long long int>> dp(m+1,vector<long long int>(n+1,0));
        dp[0][1] = 1;
        for(long long int i = 1 ; i <= m ; ++i)
            for(long long int j = 1 ; j <= n ; ++j)
                if(!obstacleGrid[i-1][j-1])
                    dp[i][j] = dp[i-1][j]+dp[i][j-1];
        return dp[m][n];
    }
};
