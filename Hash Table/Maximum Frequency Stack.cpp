class FreqStack {
unordered_map<int, int> mp;
map<int, vector<int>> s;
public:
    FreqStack() {
        
    }
    
    void push(int x) {
        mp[x]++;
        s[mp[x]].push_back(x);
    }
    
    int pop() {
        auto it = s.rbegin();
        int r = it->second.back();
        it->second.pop_back();
        if (it->second.size() == 0) {
            s.erase(it->first);
        }
        mp[r]--;
        if (mp[r] == 0) {
            mp.erase(r);
        }
        return r;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 */
