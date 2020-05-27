class Solution {
public:
    int minSteps(string s, string t) {
      vector<int>hash(26,0);
        for(int i=0;i<s.length();i++)
            hash[s[i]-'a']++;
        for(int i=0;i<t.length();i++)
            hash[t[i]-'a']--;
        int c=0;
        for(int i=0;i<26;i++){
            if(hash[i]>0)
                c+=hash[i];
        }
        return c;   
    }
};
