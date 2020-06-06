class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
         int i, d;
        vector<int> ans;
        map<int, int> freq;
        i = 0;
        while(i < k)
        {
            if(freq.find(nums[i]) == freq.end())
                freq[nums[i]] = 0;
            freq[nums[i]]++;
            i++;
        }
        while(i < nums.size())
        {
            auto it = freq.end();
            it--;
            ans.push_back(it->first);
            
            if(freq.find(nums[i]) == freq.end())
                freq[nums[i]] = 0;
            freq[nums[i]]++;
            
            d = nums[i-k];
            freq[d]--;
            if(!freq[d])
                freq.erase(d);
            i++;
        }
        auto it = freq.end();
        it--;
        ans.push_back(it->first);
        return ans;
    }
};
