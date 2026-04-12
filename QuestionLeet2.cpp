#include<iostream>
#include<vector>
#include<climits>
#include<deque>
#include <unordered_map>
using namespace std;
int dist(int a, int b) {
        if (a == 26) return 0; // finger not used yet
        return abs(a / 6 - b / 6) + abs(a % 6 - b % 6);
    }
     int minimumDistance(string word) {
        int n = word.size();
        
        // dp[l][r] = min cost
        vector<vector<int>> dp(27, vector<int>(27, INT_MAX));
        dp[26][26] = 0; // both fingers unused
        
        for (char ch : word) {
            int curr = ch - 'A';
            
            vector<vector<int>> newdp(27, vector<int>(27, INT_MAX));
            
            for (int l = 0; l <= 26; l++) {
                for (int r = 0; r <= 26; r++) {
                    if (dp[l][r] == INT_MAX) continue;
                    
                    // move left finger
                    newdp[curr][r] = min(newdp[curr][r],
                                         dp[l][r] + dist(l, curr));
                    
                    // move right finger
                    newdp[l][curr] = min(newdp[l][curr],
                                         dp[l][r] + dist(r, curr));
                }
            }
            
            dp = newdp;
        }
        
        int ans = INT_MAX;
        for (int l = 0; l <= 26; l++) {
            for (int r = 0; r <= 26; r++) {
                ans = min(ans, dp[l][r]);
            }
        }
        
        return ans;
    }
   
int main(){
  string word = "HAPPY";
  int ans = minimumDistance(word);
  cout<<ans<<endl;
    return 0;
}