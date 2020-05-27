class Solution {
public:
int res = 0;
    void find(vector<int>& nums, long S, int cur){
        if(cur == nums.size()){
            if(S == 0)
                res+=1;
        }else{
            find(nums, (long) S-nums[cur], cur+1);
            find(nums, (long) S+nums[cur], cur+1);
        }
    }
    int findTargetSumWays(vector<int>& nums, int S) {
        find(nums, S, 0);
        return res;
    }

    
};
