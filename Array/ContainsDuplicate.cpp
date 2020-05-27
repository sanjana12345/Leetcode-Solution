class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       if(nums.size() < 2)
           return false;
        sort(nums.begin(), nums.end());
         int slow = nums[0];
        int fast = nums[1];
        for(int i = 2 ; i < nums.size() ; i++)
        {
            if(slow == fast) 
                return true;
            slow = fast;
            fast = nums[i];
        }
        if(slow == fast) 
            return true; 
        return false;
    }
};
