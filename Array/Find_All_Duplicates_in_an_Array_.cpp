class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         int n=nums.size();
        if(n==0)
            return nums;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(nums[abs(nums[i])-1]<0){
                ans.push_back(abs(nums[i]));
            }
            nums[abs(nums[i])-1] = -1*nums[abs(nums[i])-1];
        }
        
        return ans;
    }
};
