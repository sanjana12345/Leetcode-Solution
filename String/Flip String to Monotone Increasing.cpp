class Solution {
public:
    int minFlipsMonoIncr(string s) {
     int l=s.length();
      int cnt = 0;
        for (int i=0; i<l; i++) {
            if (s[i]== '0') 
                cnt++;
        }

        int ans = cnt;
        for (int j=0; j<l; j++) {
            if (s[j] == '1') cnt++;
            if (s[j] == '0') cnt--;
            ans = min(ans, cnt);
        }
        return ans;   
    }
};
