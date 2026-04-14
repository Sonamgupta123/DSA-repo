#include<iostream>
#include<vector>
#include<climits>
#include<deque>
#include <unordered_map>
using namespace std;
long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        sort(robot.begin(), robot.end());
        sort(factory.begin(), factory.end());
        
        int n = robot.size();
        int m = factory.size();
        
        vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, -1));
 function<long long(int, int)> solve = [&](int i, int j) -> long long {
            // all robots assigned
            if (i == n) return 0;
            
            // no factories left
            if (j == m) return 1e18;
            
            if (dp[i][j] != -1) return dp[i][j];
            
            long long res = solve(i, j + 1); // skip this factory
            
            long long cost = 0;
              // try assigning k robots to this factory
            for (int k = 0; k < factory[j][1] && i + k < n; k++) {
                cost += abs(robot[i + k] - factory[j][0]);
                res = min(res, cost + solve(i + k + 1, j + 1));
            }
            
            return dp[i][j] = res;
        };
        
        return solve(0, 0);
    }
   
int main(){
 vector<int> robot = {1,-1};
 vector<vector<int>> factory = {{-2,1},{2,1}};
 long long ans = minimumTotalDistance(robot,factory);
 cout<<ans<<endl;
    return 0;
}