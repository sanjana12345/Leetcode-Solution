#include<bits/stdc++.h>
class Solution {
public:
    int isFound(string& a, string b) {
        
        int i = 0, j = 0;
        int m = a.length(), n = b.length();
        
        while (i < m && j < n) {
            if (a[i] == b[j]) {
                i++; j++;
            } else {
                i++;
            }
        }
        
        return (j == n);
    }
    int numMatchingSubseq(string S, vector<string>& words) {
        unordered_map<string,int>mp; int c=0;
        for(int i=0; i<words.size(); i++)
            mp[words[i]]++;
        
        for(auto it=mp.begin(); it!=mp.end(); it++){
            if(isFound(S,it->first))
                c+=it->second;
        }
        return c;
    }
};
