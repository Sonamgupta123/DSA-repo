#include<iostream>
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


int main(){
   

    return 0;
}