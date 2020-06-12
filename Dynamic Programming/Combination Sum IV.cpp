class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
       int n=nums.size();
        unsigned int dp[target+1];
        for(int i=0;i<=target;i++) {
            dp[i]=0;}
            dp[0]=1;
        for(int i=0;i<=target;i++){
            for(int j=0;j<n;j++){
                if(i>=nums[j]){
                    dp[i]+=dp[i-nums[j]];
                }
            }
        }
        return dp[target]; 
    }
};
