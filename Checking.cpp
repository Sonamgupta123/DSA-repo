 #include<iostream>
 #include<vector>
 #include <queue>
 #include<algorithm>
 using namespace std;
 
                      // Move Right
                    if (j + 1 < n) {
                        int val = grid[i][j+1];
                        int cost = (val == 0 ? 0 : 1);
                        int score = val;
                        
                        if (c + cost <= k) {
                            dp[i][j+1][c + cost] = max(
                                dp[i][j+1][c + cost],
                                dp[i][j][c] + score
                            );
                        }
                    }
                }
            }
        }
        
        int ans = -1;
        for (int c = 0; c <= k; c++) {
            ans = max(ans, dp[m-1][n-1][c]);
        }
        
        return ans;
    }
    int main(){
        vector<vector<int>> grid = {{0,1},{2,0}};
        int k = 1 ;
        int ans = maxPathScore(grid , k);
        cout<<ans<<endl;
        return 0;
    }