class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int k) {
        vector<vector<int> >vis(N+1,vector<int>(N+1,-1));
        for(int i=0; i<times.size(); i++){
            int x=times[i][0], y=times[i][1], z=times[i][2];
            vis[x][y]=z;
            
        }
        queue<pair<int,int>>q;
        q.push({k,0});
        vector<int>path(N+1, INT_MAX);
        path[k]=0;
        while(!q.empty()){
            pair<int,int>p=q.front(); q.pop();
            int currn=p.first,dis=p.second;  
            for(int i=0; i<vis[0].size(); i++){
                if(vis[currn][i]>=0 && vis[currn][i]+dis<path[i]){
                    q.push({i,vis[currn][i]+dis});
                    path[i]=min(path[i],vis[currn][i]+dis);
                }
            }
        }
       int mintime = 0;
        for(int i = 1;i < path.size();i++){
            mintime = max(path[i],mintime); 
        }        
        return mintime==INT_MAX?-1:mintime;
    
    }
};
