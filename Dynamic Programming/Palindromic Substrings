class Solution {
public:
    int cnt(string s, int l, int h) {
        int count = 0;
        while(l >= 0 && h < s.size() && s[l--] == s[h++]) count++;
        return count;
    }
    int countSubstrings(string s) {
        int ans = 0;
        for(int i=0; i < s.size(); i++) {
            ans += cnt(s, i, i);
            ans += cnt(s, i, i+1);
        }
        return ans;
        
    }
};
