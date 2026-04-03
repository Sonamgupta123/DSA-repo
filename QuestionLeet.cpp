#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int countWalls(vector<int>& walls, int l, int r) {
        if(l > r) return 0;
        return upper_bound(walls.begin(), walls.end(), r) -
               lower_bound(walls.begin(), walls.end(), l);
    }

    int overlap(vector<int>& walls, int l1, int r1, int l2, int r2) {
        int l = max(l1, l2);
        int r = min(r1, r2);
        return countWalls(walls, l, r);
    }

    int maxWalls(vector<int>& robots, vector<int>& distance, vector<int>& walls) {
        int n = robots.size();
        sort(walls.begin(), walls.end());

        vector<pair<int,int>> r;
        for(int i = 0; i < n; i++)
            r.push_back({robots[i], distance[i]});
        sort(r.begin(), r.end());

        vector<vector<pair<int,int>>> intervals(n, vector<pair<int,int>>(2));

        for(int i = 0; i < n; i++) {
            int pos = r[i].first;
            int dist = r[i].second;

            int leftStart = pos - dist;
            if(i > 0) leftStart = max(leftStart, r[i-1].first + 1);

            int rightEnd = pos + dist;
            if(i < n-1) rightEnd = min(rightEnd, r[i+1].first - 1);

            intervals[i][0] = {leftStart, pos};     // LEFT
            intervals[i][1] = {pos, rightEnd};      // RIGHT
        }

        vector<vector<int>> dp(n, vector<int>(2, 0));
       
        for(int d = 0; d < 2; d++) {
            dp[0][d] = countWalls(walls, intervals[0][d].first, intervals[0][d].second);
        }

        for(int i = 1; i < n; i++) {
            for(int d = 0; d < 2; d++) {
                int l = intervals[i][d].first;
                int rgt = intervals[i][d].second;

                int curr = countWalls(walls, l, rgt);

                for(int pd = 0; pd < 2; pd++) {
                    int pl = intervals[i-1][pd].first;
                    int pr = intervals[i-1][pd].second;

                    int ov = overlap(walls, l, rgt, pl, pr);

                    dp[i][d] = max(dp[i][d], dp[i-1][pd] + curr - ov);
                }
            }
        }

        return max(dp[n-1][0], dp[n-1][1]);
    }


int main() {
    vector<int> robots = {10,2};
    vector<int> distance = {5,1};
    vector<int> walls = {5,2,7};
    int ans = maxWalls(robots,distance,walls);
    cout<<ans<<endl;
    return 0;
}
