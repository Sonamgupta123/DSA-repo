#include<iostream>
#include<vector>
#include<climits>
#include<functional>
#include<deque>
#include <unordered_map>
using namespace std;

int m, n;
    
    bool dfs(vector<vector<char>>& grid, vector<vector<bool>>& visited,
             int x, int y, int px, int py) {
        
        visited[x][y] = true;
        
        int dirs[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
        
        for (auto& d : dirs) {
            int nx = x + d[0];
            int ny = y + d[1];
            
            if (nx < 0 || ny < 0 || nx >= m || ny >= n)
                continue;
            
            if (grid[nx][ny] != grid[x][y])
                continue;
            
            // If not visited → continue DFS
            if (!visited[nx][ny]) {
                if (dfs(grid, visited, nx, ny, x, y))
                    return true;
            }
            // If visited AND not parent → cycle found
            else if (nx != px || ny != py) {
                return true;
            }
        }
        
        return false;
    }
    
       
    
int main(){

  return 0;
 }
   
