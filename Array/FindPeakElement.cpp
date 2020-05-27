class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i; int n=nums.size(); int f,s=0;
        if(n==1)
            return 0;
        if(n==2){
            if(nums[0]!=nums[1] && nums[1]>nums[0])
                return 1;
        }
        for(i=1; i<n-1; i++)
        {
            if(nums[i]>nums[i-1] &&nums[i]>nums[i+1])
            {
                f=i;
                s=1;
                break;
            }
        }
        if(nums[n-1]>nums[n-2]){
            f=n-1;
                s=1;
        }
            
        if(s==1)
            return f;
        else
            return 0;
    }
};
