class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
       sort(pairs.begin(), pairs.end(),[](const vector<int> a, const vector<int> b) -> bool                {
                return a[1] < b[1];
              }
           );
        
        int len = 1, prev = 0;
        for(int i=1; i<pairs.size(); i++) {
            if(pairs[i][0]>pairs[prev][1]) {
                len++;
                prev = i;
            }
        }
        
        return len; 
    }
};
