class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        const auto N = nums.size();
        if(N == 0)
        {
            return 1;
        }
        
        
        for(size_t index = 0 ; index < N ; index++)  
        {                                           
           
            auto & curNum = nums[index];
         while(true)
            { if(curNum > N || curNum < 1)
                {
                    break;
                }
                
                int newIndex = curNum - 1; 
                 if(index == newIndex)
                {
                    break;
                }
                 auto & numAtNewIndex = nums[newIndex];
                if(numAtNewIndex == curNum)
                {
                    break;
                }
                
                swap(numAtNewIndex,curNum);                
            } 
        } if(nums[0] != 1)
        {
            return 1;
        }

        for(size_t index = 0 ; index < N ; index++)
        {
            const auto & curNum = nums[index];
            
            auto const resultToTest = index + 1;
            
           
            if(curNum != resultToTest)
            {
                return resultToTest;
            }
        }

        
        return N + 1;
    }
};
