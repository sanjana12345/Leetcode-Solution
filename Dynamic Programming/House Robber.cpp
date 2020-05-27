class Solution {
public:
   int rob(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        else if(nums.size()==1)
            return nums[0];
      int curMax=nums[0];
        int MaxW=0;
        int i=1;
        while(i<nums.size())
        {
            int temp=MaxW;
            MaxW=max(curMax, MaxW);
            curMax=max(MaxW, temp+nums[i]);
            i++;
        }
        
        return curMax;
    }
};
