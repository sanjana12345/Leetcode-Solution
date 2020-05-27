class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int ax[]={-1,1,0,0};
        int ay[]={0,0,-1,1};
        int n = grid.size();
        vector<vector<int>> vis(n, vector<int>(n, INT_MAX));
        vis[0][0] = grid[0][0];
        queue<pair<int, int>> q;
        q.push({0, 0});
        while(!q.empty())
        {
            int x = q.front().first, y = q.front().second; q.pop();
            for(int k=0; k<4; k++)
            {
                int i = x + ax[k], j = y + ay[k];
                if(i < 0 || i >= n || j < 0 || j >= n)
                     continue;
                int tmp = max(vis[x][y], grid[i][j]);
                if(tmp < vis[i][j])
                {
                    q.push({i,j});
                    vis[i][j] = tmp;
                }
            }
        }
        
        return vis[n-1][n-1];
    }
};
