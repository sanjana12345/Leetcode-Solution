class Solution {
public:
    int m,n;
    void dfs(int i,int j,vector<vector<int>>& A){
         A[i][j] = 0;
        if (i>0 && A[i-1][j]==1){
            dfs(i-1, j,A);
        }
        if (i<m-1 && A[i+1][j]==1){
            dfs(i+1, j,A);
        }
        if (j>0 && A[i][j-1]==1){
            dfs(i, j-1,A);
        }
        if (j<n-1 && A[i][j+1]==1){
            dfs(i, j+1,A);
        }
    }
    int numEnclaves(vector<vector<int>>& A) {
        m = A.size();
        n = A[0].size();
        for (int i=0; i<n; i++){
            if (A[0][i]==1){
                dfs(0, i, A);
            }
            if (A[m-1][i]==1){
                dfs(m-1, i, A);
            }
        }
        for (int i=0; i<m; i++){
            if (A[i][0]==1){
                dfs(i, 0, A);
            }
            if (A[i][n-1]==1){
                dfs(i, n-1,A);
            }
        }
        int cnt = 0;
        for (int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                cnt += A[i][j];
            }
        }
        return cnt;
    }
};
