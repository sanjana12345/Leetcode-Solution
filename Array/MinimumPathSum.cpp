
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int m = grid.size();
		int n = grid[0].size();
		vector<int> vec(n, 0);
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == 0)
				{
					if (j == 0)
						vec[j] = grid[i][j];
					else
						vec[j] = vec[j-1] + grid[i][j];
				}
				else
				{
					if (j == 0)
						vec[j] = vec[j] + grid[i][j];
					else
						vec[j] = min(vec[j-1], vec[j]) + grid[i][j];
				}
			}
		}
		return vec[n-1];
    }
};
