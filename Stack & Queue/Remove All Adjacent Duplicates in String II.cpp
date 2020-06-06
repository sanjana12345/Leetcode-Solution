class Solution {
public:
    string removeDuplicates(string s, int k) {
         stack<pair<char, int>>ss;
        
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            if (!ss.empty() && ss.top().second == k-1 && ss.top().first == s[i]) {
                int t = k-1;
                while (!ss.empty() && t--) ss.pop();
            } else if (!ss.empty() && ss.top().first == s[i]) {
                ss.push(make_pair(s[i], ss.top().second + 1));
            } else {
                ss.push(make_pair(s[i], 1));
            }
        }
        
        string res;
        while (!ss.empty()) {
            res += ss.top().first;
            ss.pop();
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};
