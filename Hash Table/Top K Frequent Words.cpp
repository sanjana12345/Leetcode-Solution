class comparator{
    public:
        bool operator() (const pair<string, int> &A, const pair<string, int> &B){
            if(A.second == B.second)
                return A.first > B.first;
            return A.second < B.second;
        }
};

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        for(int i = 0; i < words.size(); i++){
            mp[words[i]]++;
        }
        priority_queue<pair<string, int>, vector<pair<string, int> >, comparator> heap(mp.begin(), mp.end());
        vector<string> sol;
        while(k--){
            sol.push_back(heap.top().first);
            heap.pop();
        }
        return sol;    
    }
};
