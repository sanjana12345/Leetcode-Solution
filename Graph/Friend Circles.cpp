class Solution {
public:
   
    void dfs(vector<bool> &vist,int u,vector<vector<int>>& M){
        vist[u]=true;
        for(int i=0;i<M[u].size();i++){
            if(vist[i]==false && M[u][i])
                dfs(vist,i,M);
        }
    }
    
    int findCircleNum(vector<vector<int>>& M) {
        int ans=1,n;
        n=M.size();
        vector<bool> vist(n,false);
        dfs(vist,0,M);
        for(int i=0;i<n;i++){
            if(vist[i]==false){
                dfs(vist,i,M);
                ans++;
            }
        }
        return ans;
    }
};
