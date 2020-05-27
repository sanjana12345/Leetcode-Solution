class Solution {
public:
    int rob(vector<int>& nums) {
       if (nums.empty()) 
           return 0;
        int n(nums.size());
        int dp[2][2]{};
        dp[1][1] = nums[0];
        for (int i = 1; i < n - 1; ++ i)
            for (int j = 0; j < 2; ++ j)
            {
                int tp(dp[1][j]);
                dp[1][j] = dp[0][j] + nums[i];
                dp[0][j] = max(dp[0][j], tp);
            }
        
        return max({dp[0][0] + nums[n - 1], dp[1][1], dp[0][1], dp[1][0]});
      
    }
};
