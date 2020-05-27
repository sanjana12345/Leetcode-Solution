class Solution {
public:
    int isvalid(int i,int j,int n,int m)
{
    if(i<0 or j<0 or i>=n or j>=m)
        return 1;
    return 0;
}
void dfs(vector<vector<int>>&grid,int i,int j,int n,int m)
{
    
    if(isvalid(i,j,n,m) || grid[i][j]==1) 
         return;
    grid[i][j] = 1;
    int x[] = {-1,1,0,0};
    int y[] = {0,0,-1,1};
    for(int p=0;p<4;p++)
    {
        dfs(grid,i+x[p],j+y[p],n,m);
    }
    return;
}

int closedIsland(vector<vector<int>>& grid) {
    
    int n = grid.size();
    int m = grid[0].size();
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((grid[i][j]==0) && (i==0 or i==n-1 or j==0 or j==m-1))
            {
                dfs(grid,i,j,n,m);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==0)
            {
                dfs(grid,i,j,n,m);
                ans = ans + 1;
            }
        }
    }
    return ans;
}
};
