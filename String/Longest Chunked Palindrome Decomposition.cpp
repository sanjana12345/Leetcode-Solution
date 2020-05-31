class Solution {
public:
   unordered_map<string, int> mp; 
  
int find(string& s, int l, int r) { 
    int ans = 1; 
    if (l > r) 
        return 0; 
    if(mp.find(s.substr(l,r-l+1))!=mp.end())
        return mp[s.substr(l,r-l+1)];
    for(int i=1; i<=(r-l+1)/2; i++){
        if(s.substr(l, i)== s.substr(r-i+1,i))
            ans=max(ans,2+find(s,l+i,r-i));
    }
    mp[s.substr(l,r-l+1)]=ans;
   
    return ans;
} 
    int longestDecomposition(string text) {
        int l=0;
        int r=text.size()-1;
        int x=find(text,l,r);
        return x;
    }
};
