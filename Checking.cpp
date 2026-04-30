 #include<iostream>
 #include<vector>
 #include <queue>
 #include<algorithm>
 using namespace std;
 int maxPathScore(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();
        
        // dp[i][j][c] = max score
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(k+1, -1)));
        
        dp[0][0][0] = 0; // starting point
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                for (int c = 0; c <= k; c++) {
                    if (dp[i][j][c] == -1) continue;
                     // Move Down
                    if (i + 1 < m) {
                        int val = grid[i+1][j];
                        int cost = (val == 0 ? 0 : 1);
                        int score = val;
                        
                        if (c + cost <= k) {
                            dp[i+1][j][c + cost] = max(
                                dp[i+1][j][c + cost],
                                dp[i][j][c] + score
                            );
                        }
                    }