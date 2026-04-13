#include<iostream>
#include<vector>
#include<climits>
#include<deque>
#include <unordered_map>
using namespace std;

        
       
          
        
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