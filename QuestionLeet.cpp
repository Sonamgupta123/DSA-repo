#include<iostream>
#include<vector>
 int maximumAmount(vector<vector<int>>& coins) {
        int m = coins.size();
        int n = coins[0].size();

        // dp[i][j][k] = max coins at (i,j) using k neutralizations
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(3, INT_MIN)));

        // Start position
        dp[0][0][0] = coins[0][0];
        if (coins[0][0] < 0) {
            dp[0][0][1] = 0; // neutralize starting cell
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k <= 2; k++) {
                    if (dp[i][j][k] == INT_MIN) continue;

                    // Move Right
                    if (j + 1 < n) {
                        int val = coins[i][j + 1];

                        // take normally
                        dp[i][j + 1][k] = max(dp[i][j + 1][k], dp[i][j][k] + val);

                        // neutralize if negative
                        if (val < 0 && k < 2) {
                            dp[i][j + 1][k + 1] = max(dp[i][j + 1][k + 1], dp[i][j][k]);
                        }
                    }

                    // Move Down
                    if (i + 1 < m) {
                        int val = coins[i + 1][j];

                        // take normally
                        dp[i + 1][j][k] = max(dp[i + 1][j][k], dp[i][j][k] + val);

                        // neutralize if negative
                        if (val < 0 && k < 2) {
                            dp[i + 1][j][k + 1] = max(dp[i + 1][j][k + 1], dp[i][j][k]);
                        }
                    }
                }
            }
        }

        return max({dp[m-1][n-1][0], dp[m-1][n-1][1], dp[m-1][n-1][2]});
    
    }
int main(){
   vector<int> coins =  {[0,1,-1],[1,-2,3],[2,-3,4]};
   int ans = maximumAmount(coins);
   for(int x : ans){
    cout<<x<<" ";
   }
    return 0;
}