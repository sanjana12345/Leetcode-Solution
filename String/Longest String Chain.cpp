class Solution {
public:
    
    int longestStrChain(vector<string>& words) {
        unordered_map<string,int> mp;
        int ans=0;
        for(int i=0;i<words.size();i++){
            mp.insert({words[i],1});
        }
        sort(words.begin(),words.end(),[](const string &a, const string &b){
            return a.size()>b.size();
        });
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                string s = words[i].substr(0,j) + words[i].substr(j+1);
                if(mp.find(s)!=mp.end()){
                    ans = max(ans, 1+mp[words[i]]);
                    mp[s]=1+mp[words[i]];
                }else{
                    ans=max(ans,mp[words[i]]);
                }
            }
        }
        return ans;
    }
};
