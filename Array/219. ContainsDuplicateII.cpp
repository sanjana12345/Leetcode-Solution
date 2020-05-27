class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& a, int k) {
        if(k == 0) 
            return false;
        unordered_set<int> set;
        for(int i = 0; i < a.size(); i++) {
            if(set.find(a[i]) != set.end()) 
                return true;
            if(i >= k)
            set.erase(a[i-k]);
            set.insert(a[i]);
        }
        return false;
    }
};
