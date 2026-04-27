#include<iostream>
#include<queue>
#include<vector>
using namespace std;
 bool hasValidPath(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        
        // Directions: up, down, left, right
        vector<vector<vector<int>>> dirs = {
            {},
            {{0,-1},{0,1}},       // 1
            {{-1,0},{1,0}},       // 2
            {{0,-1},{1,0}},       // 3
            {{0,1},{1,0}},        // 4
            {{0,-1},{-1,0}},      // 5
            {{0,1},{-1,0}}        // 6
        };
        
        // Check if neighbor connects back
        auto isValid = [&](int x, int y, int px, int py) {
            for (auto &d : dirs[grid[x][y]]) {
                if (x + d[0] == px && y + d[1] == py)
                    return true;
            }
            return false;
        };
 
        queue<pair<int,int>> q;
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        
        q.push({0,0});
        vis[0][0] = true;
        
        while (!q.empty()) {
            auto [x, y] = q.front(); q.pop();
            
            if (x == m-1 && y == n-1) return true;
            
            for (auto &d : dirs[grid[x][y]]) {
                int nx = x + d[0];
                int ny = y + d[1];
                
                if (nx >= 0 && ny >= 0 && nx < m && ny < n && !vis[nx][ny]) {
                    if (isValid(nx, ny, x, y)) {
                        vis[nx][ny] = true;
                        q.push({nx, ny});
                    }
                }
            }
        }
        
        return false;
    }

int main(){
   vector<vector<int>> grid = {{1,1,2}};
   bool ans = hasValidPath(grid);
   cout<<ans<<endl;

    return 0;
}