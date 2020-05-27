const int maxn=10001;
int dp[maxn];
class NumArray {
public:
    NumArray(vector<int>& nums) {
       int sum=0;
         
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
            dp[i]=sum;
        }
    }
    
    int sumRange(int i, int j) {
       if(i==0)
            return dp[j];
        else
           return dp[j]-dp[i-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
