class Solution {
public:
    int longestArithSeqLength(vector<int>& A) {
         int n = A.size();
        
        unordered_map<int, unordered_map<int, int>>dp;
        int res = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                int d = A[i]-A[j];
                if (dp[d].count(j) == 0)
                    dp[d][i] = 2;
                else
                    dp[d][i] = max(dp[d][i], 1 + dp[d][j]);
                res = max(res, dp[d][i]);
            }
        }
    
        return res;
    }
};
