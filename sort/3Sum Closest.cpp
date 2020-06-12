class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size()==0)
             return 0;
        sort(nums.begin(),nums.end());
        int m=INT_MAX,ans;
        for(int i=0;i<nums.size()-2;i++)
        {
            int l=i+1,r=nums.size()-1;
            while(l<r)
            {
            int sum=nums[l]+nums[r]+nums[i];
                if(m>abs(sum-target))
                {
                    m=abs(sum-target);
                    ans=sum;
                }
                else if(sum<target)
                    l++;
                else
                    r--;
            }
        }
        return ans;
    }
};
