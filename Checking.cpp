#include <iostream>
#include <vector>
using namespace std;
 vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        int layers = min(m, n) / 2;

        for (int layer = 0; layer < layers; layer++) {
            vector<int> elems;

            int top = layer;
            int left = layer;
            int bottom = m - layer - 1;
            int right = n - layer - 1;

   for (int j = left; j <= right; j++)
                elems.push_back(grid[top][j]);

            // right column
            for (int i = top + 1; i <= bottom - 1; i++)
                elems.push_back(grid[i][right]);

            // bottom row
            for (int j = right; j >= left; j--)
                elems.push_back(grid[bottom][j]);

            // left column
            for (int i = bottom - 1; i >= top + 1; i--)
                elems.push_back(grid[i][left]);

            int len = elems.size();
            int rot = k % len;

int main() {
    

    return 0;
}