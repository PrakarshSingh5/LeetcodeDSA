class Solution {
public:
    int largestMagicSquare(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

       
        vector<vector<int>> row(m, vector<int>(n + 1, 0));
       
        vector<vector<int>> col(m + 1, vector<int>(n, 0));

      
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                row[i][j + 1] = row[i][j] + grid[i][j];
                col[i + 1][j] = col[i][j] + grid[i][j];
            }
        }

        
        for (int k = min(m, n); k >= 2; k--) {
            for (int i = 0; i + k <= m; i++) {
                for (int j = 0; j + k <= n; j++) {

                    
                    int target = row[i][j + k] - row[i][j];
                    bool ok = true;

                   
                    for (int r = i; r < i + k && ok; r++) {
                        int sum = row[r][j + k] - row[r][j];
                        if (sum != target) ok = false;
                    }

                    
                    for (int c = j; c < j + k && ok; c++) {
                        int sum = col[i + k][c] - col[i][c];
                        if (sum != target) ok = false;
                    }

                   
                    int diag1 = 0;
                    for (int d = 0; d < k; d++) {
                        diag1 += grid[i + d][j + d];
                    }
                    if (diag1 != target) ok = false;

                   
                    int diag2 = 0;
                    for (int d = 0; d < k; d++) {
                        diag2 += grid[i + d][j + k - 1 - d];
                    }
                    if (diag2 != target) ok = false;

                    if (ok) return k;
                }
            }
        }

       
        return 1;
    }
};
